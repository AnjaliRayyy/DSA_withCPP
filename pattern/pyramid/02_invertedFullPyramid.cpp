/*
    Inverted Full Pyramid : 
    For n=4,

    * * * * * * *
      * * * * *
        * * *
          *
*/

#include <iostream>
using namespace std;

int main() {
    int n;

    cout<<"Enter the value of n : ";
    cin>> n;

    for(int i=n;i>0;i--)
    {
        for(int k=0;k<n-i;k++)
        cout<<"  ";

        for(int j=0;j<(2*i)-1;j++)
        cout<<"* ";

        cout<<endl;
    }
    return 0;
}