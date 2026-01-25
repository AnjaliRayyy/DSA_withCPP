#include <iostream>
#include <vector>
using namespace std;
class Queue{
    vector<int> arr;
    public:
    

    void push(int val){
        arr.push_back(val);
    }

    void pop(){
        if(arr.empty()) cout<<"Queue is empty";
        else arr.erase(arr.begin());
    }

    int front(){
        return arr.empty()?-1:arr.front();
    }

    int rear(){
        return arr.empty()?-1:arr.back();
    }
    void display(){
        for (int i: arr){
            cout<< i <<" ";
        }
        cout<<endl;
    }

};
int main() {
    Queue q;
    q.push(1);
    q.push(2);
    q.push(3);
    q.push(4);
    q.display();
    cout<<"front : "<<q.front()<<endl;
    q.pop();
    cout<<"front : "<<q.front()<<endl;
    cout<<"rear : "<<q.rear()<<endl;
    return 0;
}