/*
    Number Pyramid : 
    For n=5,

                1 
              1 2 3 
            1 2 3 4 5 
          1 2 3 4 5 6 7 
        1 2 3 4 5 6 7 8 9 

*/
#include <iostream>
using namespace std;

int main() {
    int n;

    cout<<"Enter the value of n : ";
    cin>>n;

    for(int i=1;i<=n;i++)
    {
        for(int k=1;k<=n-i;k++)
        cout<<"  ";

        for(int j=1;j<=2*i-1;j++)
        cout<<j<<" ";

        cout<<endl;
    }
    return 0;
}