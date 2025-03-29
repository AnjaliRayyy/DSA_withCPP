#include <iostream>
using namespace std;

int main() {
    int n;

    cout<<"Enter the value of n : ";
    cin>>n;

    char ch;
    for(int i=0;i<n;i++)
    {
        ch='A';
        for(int j=0;j<n;j++)
        {
            if(i==0 || i==n-1)
            cout<<ch++<<" ";
            else if(j==0 || j==n-1)
            cout<<ch++<<" ";
            else
            {
                cout<<"  ";
                ch++;
            }
        }
        cout<<endl;
    }
    return 0;
}