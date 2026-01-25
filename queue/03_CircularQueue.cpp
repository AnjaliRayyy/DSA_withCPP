#include <iostream>
#include <vector>
using namespace std;
class CircularQueue{
    vector<int> arr;
    int f;
    int r;
    int size;
public:
    CircularQueue(int capacity){
        arr.resize(capacity);
        f=-1;
        r=-1;
        size=capacity;
    }
    
    bool isEmpty(){
        return f == -1;
    }

    bool isFull(){
        return (r+1)%size == f;
    }
    void push(int val){
        if(isEmpty()){
            f=r=0;
            arr[r]=val;
        }else if(isFull()){
            cout<<"Cant insert element! Queue is full!"<<endl;
            return;
        }else{
            r=(r+1)%size;
            arr[r]=val;
        }
    }

    void pop(){
        if(isEmpty()){
            cout<<"Nothing to pop! Queue is empty"<<endl;
        }else if(f == r){
            f=r=-1;
        }else{
            f=(f+1)%size;
        }
    }

    int front(){
        if(isEmpty())   return -1;
        else return arr[f];
    }

    int rear(){
        if(isEmpty())   return -1;
        else return arr[r];
    }

    void display(){
        if(isEmpty()){
            cout<<"Queue is empty";
            return;
        }
        for(int i=f;i!=r; i=(i+1)%size){
            cout<<arr[i]<<" ";
        }
        cout<<arr[r]<<endl;
    }
};
int main() {
    CircularQueue q(3);
    cout<<"Front : "<<q.front()<<endl;
    q.pop();
    q.push(1);
    q.push(2);
    q.push(3);
    q.push(4);
    q.display();
    q.pop();
    q.pop();
    q.display();
    q.pop();
    cout<<"Front : "<<q.front()<<endl;
    cout<<"Rear : "<<q.rear()<<endl;
    return 0;
}