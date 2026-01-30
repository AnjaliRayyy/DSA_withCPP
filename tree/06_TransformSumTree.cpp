#include <iostream>
#include <vector>
#include<queue>
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
int i=-1;
Node* buildTree(vector<int> arr){
    i++;
    if(arr[i]==-1)  return NULL;
    Node* newNode=new Node(arr[i]);
    newNode->left=buildTree(arr);
    newNode->right=buildTree(arr);
    return newNode;
}
int trfSumTree(Node* root){
    if(root==NULL)  return 0;
    int leftSum=trfSumTree(root->left);
    int rightSum=trfSumTree(root->right);
    root->data=leftSum+rightSum+root->data;
    return root->data;
}
void levelorder(Node* root){
    queue<Node *>   q;
    q.push(root);
    q.push(NULL);
    while(q.size()>0){
        Node* temp=q.front();
        q.pop();
        if(temp==NULL) {
            if(!q.empty()){
                cout<<endl;
                q.push(NULL);
                continue;
            }else break;
        } 


            cout<<temp->data<<" ";
            if(temp->left!=NULL)    q.push(temp->left);
            if(temp->right!=NULL)   q.push(temp->right);
        
    }
}
int main() {
    vector<int> arr={1,2,4,-1,-1,-1,3,5,-1,-1,6,7,-1,-1,-1};
    Node* root=buildTree(arr);
    levelorder(root);
    cout<<"\nAfter Sum Transformation :\n";
    trfSumTree(root);
    levelorder(root);
    return 0;
}