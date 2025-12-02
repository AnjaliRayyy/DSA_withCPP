/*
Pattern: Alphabet Triangle
For n=5,

A 
B B 
C C C 
D D D D 
E E E E E 
*/
#include <iostream>
using namespace std;
int main(){
    printf("Enter the value of n: ");
    int n;
    cin>>n;
    for(int i=0;i<n;i++){
        for(int j=0;j<i+1;j++){
            cout<<char(i+65)<<" ";
        }
        cout<<endl;
    }
    return 0;
}