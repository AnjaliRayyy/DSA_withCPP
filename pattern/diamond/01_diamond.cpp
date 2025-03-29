#include <iostream>
using namespace std;

int main() {
    int n;

    cout<<"Enter the value of n : ";
    cin>>n;

    int cnt=n-1;
    
    for(int i=0;i<(2*n)-1;i++)
    {
        if(i<n)
        {
            for(int k=0;k<n-i-1;k++)
            cout<<"  ";
            for(int j=0;j<(2*i)+1;j++)
            cout<<"* ";
        }
        else
        {
            for(int k=0;k<i-n+1;k++)
            cout<<"  ";
            for(int j=0;j<2*cnt-1;j++)
            cout<<"* ";
            cnt--;
        }
        cout<<endl;
    }
    return 0;
}