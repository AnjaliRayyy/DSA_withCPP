#include <iostream>
#include <queue>
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
Node* buildtree(){
    int val;
    cout<<"Enter the value of the node or -1 for no node : ";
    cin>>val;
    if(val==-1) return NULL;
    Node* newNode=new Node(val);
    newNode->left=buildtree();
    newNode->right=buildtree();

    return newNode;
}
void preorder(Node* root){
    if(root==NULL)  return;
    cout<<root->data<<" ->";
    preorder(root->left);
    preorder(root->right);
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
int main(){
    Node* root=buildtree();
    preorder(root);
    cout<<endl;
    levelorder(root);
    return 0;
}