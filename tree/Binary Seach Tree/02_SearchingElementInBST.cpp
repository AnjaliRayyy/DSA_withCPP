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
    return root;
}
Node* buildBST(vector<int> arr){
    Node* root=NULL;
    for(int val: arr){
        root=insert(root,val);
    }
    return root;
}
bool search(Node* root,int target){
    if(root==NULL)  return false;
    else if(root->data == target)    return true;
    else if(target<root->data)    search(root->left,target);
    else search(root->right,target);
}
int main() {
    vector<int> arr={3,2,1,5,6,4};
    Node* root=buildBST(arr);

    int target;
    cout<<"Enter the value to be searched : ";
    cin>>target;

    search(root,target)==1? cout<<"Target was found" : cout<<"Target not found";
    return 0;
}