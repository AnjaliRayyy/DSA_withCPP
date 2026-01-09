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
class CircularLL{
Node* head;
Node* tail;
public:
    CircularLL(){
        head=NULL;
        tail=NULL;
    }
    void insertAtHead(int val){
        Node* newNode=new Node(val);
        if(head==NULL){
            head=tail=newNode;
            tail->next=head;
        }else{
            newNode->next=head;
            head=newNode;
            tail->next=head;
        }      
    }
    void insertAtTail(int val){
        Node* newNode=new Node(val);
        if(head==NULL){
            head=tail=newNode;
            tail->next=head;
        }else{
            newNode->next=head;
            tail->next=newNode;
            tail=newNode;
        }    
    }
    void deleteAtHead(){
        if(head==NULL){
            cout<<"List is empty! Nothing to delete\n";
            return;
        }else if(head==tail){
            delete head;
            head=tail=NULL;
        }else{
            Node* temp=head;
            head=head->next;
            tail->next=head;
            temp->next=NULL;
            delete temp;
        }
    }
    void deleteAtTail(){
        if(head==NULL){
            cout<<"List is empty! Nothing to delete\n";
        }else if(head==tail){
            delete head;
            head=tail=NULL;
        }else{
            Node* prev=head;
            Node* temp=tail;
            while(prev->next!=tail){
                prev=prev->next;
            }
            prev->next=head;
            tail=prev;
            temp->next=NULL;
            delete temp;
        }
    }
    void print(){
        if(head==NULL){
            cout<<"List is empty\n";
            return;
        }else{
            cout<<head->data<<" -> ";
            Node* temp=head->next;
            while(temp!=head){
                cout<<temp->data<<" -> ";
                temp=temp->next;
            }
            cout<<head->data<<endl;
        }
    }
};
int main() {
    CircularLL cll;
    cll.insertAtHead(2);
    cll.insertAtHead(3);
    cll.insertAtHead(4);
    cll.insertAtTail(10);
    cll.insertAtTail(12);
    cll.print();
    cll.deleteAtHead();
    cll.print();
    cll.deleteAtTail();
    cll.print();
    cll.deleteAtTail();
    cll.print();
    cll.deleteAtHead();
    cll.print();
    cll.deleteAtHead();
    cll.print();
    return 0;
}