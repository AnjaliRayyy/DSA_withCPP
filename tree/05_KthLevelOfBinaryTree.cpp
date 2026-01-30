#include <iostream>
#include<vector>
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
static int i=-1;
Node* buildTree(vector<int> arr){
    i++;
    if(arr[i]==-1)  return NULL;
    Node* newNode=new Node(arr[i]);
    newNode->left=buildTree(arr);
    newNode->right=buildTree(arr);

    return newNode;
}
void kthLevel(Node* root,int k){
    if(root==NULL)  return;
    if(k==1){
        cout<<root->data<<" ";
    }
    kthLevel(root->left,k-1);
    kthLevel(root->right,k-1);
}
int main() {
    vector<int> arr={1,2,4,-1,-1,-1,3,5,-1,-1,6,7,-1,-1,-1};
    Node* root=buildTree(arr);
    int k=3;
    kthLevel(root,k);
    return 0;
}