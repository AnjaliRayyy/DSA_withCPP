/*
 Inverted left-hand Pyramid Pattern :
    For n=4,

    * * * *
    * * *
    * *
    * 
    
 */
#include <iostream>
using namespace std;

int main() {
    int n;

    cout<<"Enter the value of n : ";
    cin>>n;

    for(int i=n;i>0;i--)
    {
        for(int j=0;j<i;j++)
        cout<<"* ";
        cout<<endl;
    }
    return 0;
}