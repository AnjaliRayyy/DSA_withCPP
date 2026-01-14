#include <iostream>
#include <vector>
using namespace std;
class Stack{
    vector<int> arr;
public:
    void push(int val){
        arr.push_back(val);
    }
    void pop(){
        arr.pop_back();
    }
    int top(){
        return arr[arr.size()-1];
    }
    bool empty(){
        return arr.size()==0;
    }
};
int main() {
    Stack s;
    s.push(20);
    s.push(80);
    s.push(90);
    while(!s.empty()){
        cout<<s.top()<<" ";
        s.pop();
    }
    return 0;
}