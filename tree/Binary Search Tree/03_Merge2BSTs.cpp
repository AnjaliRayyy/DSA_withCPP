#include <iostream>
#include <vector>
using namespace std;
class Node{
    public:
    int data;
    Node* left;
    Node* right;
    Node(int val){
        data=val;
        left=right=NULL;
    }
};
Node* insert(Node* root,int val){
    if(root==NULL){
        Node* newNode=new Node(val);
        return newNode;
    }
    if(val<root->data)  root->left=insert(root->left,val);
    else root->right=insert(root->right,val);
}
Node* buildBST(vector<int> arr){
    Node* root=new Node(arr[0]);
    for(int i=1;i<arr.size();i++){
        root=insert(root,arr[i]);
    }
    return root;
}
void inorder(Node* root,vector<int> &arr){
    if(root==NULL)  return;
    inorder(root->left,arr);
    arr.push_back(root->data);
    inorder(root->right,arr);
}
void merge(vector<int> &arr1,vector<int> &arr2,vector<int> &merge){
    int i=0,j=0;
    while(i<arr1.size() && j<arr2.size()){
        if(arr1[i]<arr2[j]){
            merge.push_back(arr1[i]);
            i++;
        }
        else{
            merge.push_back(arr2[j]);
            j++;
        }
    }
    while(i<arr1.size()){
        merge.push_back(arr1[i]);
        i++;
    }
    while(j<arr2.size()){
        merge.push_back(arr2[j]);
        j++;
    }
}
Node* buildBalancedBST(vector<int> arr,int start,int end){
    if(start>end)  return NULL;
    int mid=(start+end)/2;
    Node* root=new Node(arr[mid]);
    root->left=buildBalancedBST(arr,start,mid-1);
    root->right=buildBalancedBST(arr,mid+1,end);
    return root;
}
Node* mergeBSTs(Node* root1,Node* root2){
    vector<int> bst1;
    vector<int> bst2;
    vector<int> merged;
    inorder(root1,bst1);
    inorder(root2,bst2);
    merge(bst1,bst2,merged);
    return buildBalancedBST(merged,0,merged.size()-1);
}
void display(Node* root){
    if(root==NULL)  return;
    display(root->left);
    cout<<root->data<<" -> ";
    display(root->right);
}
int main() {
    vector<int> arr1={3,2,1,5,6,4};
    vector<int> arr2={8,7,9,10};
    Node* root1=buildBST(arr1);
    Node* root2=buildBST(arr2);
    Node* mergedRoot=mergeBSTs(root1,root2);
    cout<<"Displaying the inorder traversal of the merged BST:\t";
    display(mergedRoot);
    return 0;
}