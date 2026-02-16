#include <iostream>
#include <queue>
#include <vector>
#include <map>
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
void TopView(Node* root){
    queue<pair<Node*,int >> q;
    map<int,int>    m_top;
    map<int,int>    m_bottom;
    if(root==NULL)  return;
    q.push({root,0});
    while(q.size()>0){
        Node* curr=q.front().first;
        int dist=q.front().second;
        q.pop();
        if(m_top.find(dist)==m_top.end())   m_top[dist]=curr->data;
        m_bottom[dist]=curr->data;
        if(curr->left!=NULL)    q.push({curr->left,dist-1});
        if(curr->right!=NULL)   q.push({curr->right,dist+1});
    }

    cout<<"TOP VIEW --------> ";
    for(auto i: m_top){
        cout<<i.second<<" ";
    }
    cout<<"\nBOTTOM VIEW -----> ";
    for(auto i:m_bottom){
        cout<<i.second<<" ";
    }
}
int main() {
    vector<int> arr={1,2,4,-1,-1,-1,3,5,-1,-1,6,7,-1,-1,-1};
    Node* root=buildTree(arr);
    cout<<"Top and Bottom View of the Tree :\n";
    TopView(root);
    return 0;
}