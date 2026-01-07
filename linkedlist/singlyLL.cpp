#include <iostream>
using namespace std;
class Node{
public:
    int data;
    Node* next;

    Node(int val){
        data=val;
        next=NULL;
    }
};
class List{
    Node* head;
    Node* tail;

public:
    List(){
        head=tail=NULL;
    }
    void push_front(int data){
        Node* newNode=new Node(data);
        if(head==NULL){
            head=tail=newNode;
            return;
        }else{
            newNode->next=head;
            head=newNode;
            return;
        }
    }
    void push_back(int data){
        Node* newNode=new Node(data);
        if(head==NULL){
            head=tail=newNode;
            return;
        }else{
            tail->next=newNode;
            tail=newNode;
            return;
        }
    }
    void pop_front(){
        if(head==NULL){
            cout<<"LL is empty\n";
            return;
        }
        Node* temp=head;
        head=head->next;
        temp->next=NULL;
        delete temp;
    }
    void pop_back(){
        if(head==NULL){
            cout<<"LL is empty\n";
            return;
        }
        Node* temp=head;
        while(temp->next!=tail){
            temp=temp->next;
        }
        temp->next=NULL;
        delete tail;
        tail=temp;
    }
    void insert(int data,int pos){
        if(pos<0){   
            cout<<"Invalid pos\n";
            return;
        }
        if(pos==0) { 
            push_front(data);
            return;
        }
        Node* newNode= new Node(data);
        int current = 0;
        Node* temp=head;
        while(current!=pos-1 && temp!=NULL){
            temp=temp->next;
            current++;
        }
        if(temp!=NULL){
            newNode->next=temp->next;
            temp->next=newNode;
        }
        else{
            cout<<"Invalid position\n";
        }
    }
    int search(int data){
        Node* temp=head;
        int index=-1;
        while(temp!=NULL){
            index++;
            if(temp->data == data)  return index;
            temp=temp->next;
        }
        return -1;
    }
    void print(){
        Node* temp=head;
        while(temp!=NULL){
            cout<<temp->data<<" -> ";
            temp=temp->next;
        }
        cout<<"NULL"<<endl;
    }
};
int main() {
    List ll;
    ll.push_front(1);
    ll.push_front(10);
    ll.push_front(20);
    ll.print();
    cout<<ll.search(10);
    return 0;
}