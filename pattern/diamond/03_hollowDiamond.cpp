#include <iostream>
using namespace std;

int main() {
    int n;

    cout<<"Enter the value of n : ";
    cin>>n;

    for(int i=0;i<n;i++)
    {
       for(int k=0;k<n-i-1;k++)
       cout<<"  ";
       cout<<"* ";
       for(int l=0;l<2*i-1;l++)
       cout<<"  ";
       if(i!=0)
       cout<<"* ";

       cout<<endl;
    }

    for(int i=0;i<n-1;i++)
    {
        for(int k=0;k<(i+1);k++)
        cout<<"  ";
        cout<<"* ";
        for(int j=0;j<2*(n-2-i)-1;j++)
        cout<<"  ";
        if(i!=(n-2))
        cout<<"* ";

        cout<<endl;
    }
    return 0;
}