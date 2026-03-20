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
void inorder(Node* root){
    if(root==NULL)  return;
    inorder(root->left);
    cout<<root->data<<" -> ";
    inorder(root->right);
}
int main() {
    vector<int> arr={3,2,1,5,6,4};
    Node* root=buildBST(arr);
    cout<<"Displaying the inorder traversal of the BST:\t";
    inorder(root);
    return 0;
}