#include <iostream>
using namespace std;
class Node{
public:
    int data;
    Node* next;
    Node* prev;

    Node(int val){
        data=val;
        next=NULL;
        prev=NULL;
    }
};
class List{
    Node* head;
    Node* tail;
public:
    List(){
        head=tail=NULL;
    }
    void push_front(int val){
        Node* node=new Node(val);
        if(head==NULL){
            head=tail=node;
        }else{
            node->next=head;
            head->prev=node;
            head=node;
        }
    }
    void push_back(int val){
        Node* node=new Node(val);
        if(head==NULL){
            head=tail=node;
        }else{
            node->prev=tail;
            tail->next=node;
            tail=node;
        }
    }
    void pop_front(){
        if (head==NULL){
            cout<<"Nothing to pop, List is empty"<<endl;
            return;
        }
        Node* temp=head;
        head=head->next;
        if(head==NULL){
            tail=NULL;
        }else{
            head->prev=NULL;
        }
        temp->next=NULL;
        delete temp;
    }
    void pop_back(){
        if (head==NULL){
            cout<<"Nothing to pop, List is empty"<<endl;
            return;
        }
        Node* temp=tail;
        tail=tail->prev;
        if(tail==NULL){
            head=NULL;
        }else{
            tail->next=NULL;
        }
        temp->prev=NULL;
        delete temp;
    }
    void print(){
        Node* temp=head;
        while(temp!=NULL){
            cout<<temp->data<<" <==> "; 
        }
        cout<<"NULL"<<endl;
    }
};
int main() {
    
    return 0;
}