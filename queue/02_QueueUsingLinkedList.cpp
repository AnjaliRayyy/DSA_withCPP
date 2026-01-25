#include <iostream>
#include <vector>
using namespace std;
class Node{
public:
    int val;
    Node* next;
    Node* prev;

    Node(int v){
        val=v;
        next=prev=NULL;
    }
};
class Queue{
public:
    Node* front;
    Node* rear;
    Queue(){
        front=rear=NULL;
    }

    void push(int val){
        Node* newNode=new Node(val);
        if(!newNode){
            cout<<"Memory Overflow!"<<endl;
            return;
        }
        if(front==NULL){
            front=rear=newNode;
            rear->next=front;
            front->next=rear;
        }else{
            rear->next=newNode;
            newNode->prev=rear;
            rear=newNode;
        }
    }

    void pop(){
        if(front==NULL){
            cout<<"Nothing to pop! Queue is empty!"<<endl;
            return;
        }
        Node* temp=front;
        front=front->next;
        front->prev=NULL;
        temp->next=NULL;
        delete(temp);
    }

    int showFront(){
        if(front==NULL){
            cout<<"Queue is empty";
            return -1;
        }
        return front->val;
    }

    int showRear(){
        if(rear==NULL){
            cout<<"Queue is empty";
            return -1;
        }
        return rear->val;
    }

    void display(){
        if(front==NULL){
            cout<<"Nothing to display! Queue is empty"<<endl;
            return;
        }
        Node* temp=front;
        while(temp!=NULL){
            cout<<temp->val<<" ";
            temp=temp->next;
        }
        cout<<endl;
    }
};
int main() {
    Queue q;
    q.display();
    q.push(1);
    q.push(2);
    q.push(3);
    q.push(4);
    q.display();
    cout<<"front : "<<q.showFront()<<endl;
    q.pop();
    cout<<"front : "<<q.showFront()<<endl;
    cout<<"rear : "<<q.showRear()<<endl;
    return 0;
}