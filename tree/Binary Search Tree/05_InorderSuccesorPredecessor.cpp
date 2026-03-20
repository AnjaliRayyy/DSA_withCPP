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
Node* findPredecessor(Node* root){
    Node* curr=root;
    while(curr->right!=NULL){
        curr=curr->right;
    }
    return curr;
}
Node* findSuccessor(Node* root){
    Node* curr=root;
    while(curr->left!=NULL){
        curr=curr->left;
    }
    return curr;
}
void inorderSuccessorPredecessor(Node* root,int key){
    Node* curr=root;
    Node* pred=NULL;
    Node* succ=NULL;

    while(curr!=NULL){
        if(key<curr->data){
            succ=curr;
            curr=curr->left;
        }
        else if(key>curr->data){
            pred=curr;
            curr=curr->right;
        }
        else{
            if(curr->left!=NULL) pred=findPredecessor(curr->left);
            if(curr->right!=NULL) succ=findSuccessor(curr->right);
            break;
        }
    }
    cout<<"Current Node: "<<curr->data<<"\tPredecessor: "<<(pred?pred->data:-1)<<"\tSuccessor: "<<(succ?succ->data:-1)<<endl;
}
int main() {
    vector<int> arr={6,4,8,1,5,7,9};
    Node* root=buildBST(arr);
    inorderSuccessorPredecessor(root,7);
    return 0;
}