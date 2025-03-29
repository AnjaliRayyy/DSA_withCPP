/*
    Rhombus Pattern : 
    For n=5,
    
        * * * * * 
          * * * * *
            * * * * *
               * * * * *
                  * * * * *

*/
#include <iostream>
using namespace std;

int main() {
    int n;

    cout<<"Enter the value of n : ";
    cin>>n;

    for(int i=0;i<n;i++)
    {
        for(int k=0;k<i;k++)
        cout<<"  ";

        for(int j=0;j<n;j++)
        cout<<"* ";

        cout<<endl;
    }
    return 0;
}