/*
    Square Pattern 2 :
    For n=3,

    1 2 3
    4 5 6
    7 8 9
*/

#include <iostream>
using namespace std;

int main() {
    int n,cnt=1;

    cout<< "Enter the value of n : ";
    cin>> n;

    for(int i=0;i<n;i++)
    {
        for(int j=0;j<n;j++)
        {
            cout<<cnt<<" ";
            cnt++;
        }
        cout<<endl;
    }
    return 0;
}