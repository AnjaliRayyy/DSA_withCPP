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
class Info{
public:
    int min, max, size;

    Info(int x,int y,int z){
        min=x;
        max=y;
        size=z;
    }
};
static int i=-1;
Node* buildBST(vector<int> arr){
    i++;
    if(arr[i]==-1)  return NULL;
    Node* root=new Node(arr[i]);
    root->left=buildBST(arr);
    root->right=buildBST(arr);
    return root;
}
Info helper(Node* root){
    if(root==NULL)  return Info(INT32_MAX,INT32_MIN,0);

    Info left=helper(root->left);
    Info right=helper(root->right);

    if(root->data>left.max && root->data<right.min){
        int minimum=min(root->data,left.min);
        int maximum=max(root->data,right.max);
        return Info(minimum,maximum,left.size+right.size+1);
    }
    else{
        return Info(INT32_MIN,INT32_MAX,max(left.size,right.size));
    }
}
int largestBST(Node* root){
    if(root==NULL)  return 0;
    Info ans=helper(root);
    return ans.size;
}
int main() {
    vector<int> arr={10,5,1,-1,-1,8,-1,-1,15,12,-1,-1,60,-1,-1};
    Node* root=buildBST(arr);
    cout<<largestBST(root);
    return 0;
}