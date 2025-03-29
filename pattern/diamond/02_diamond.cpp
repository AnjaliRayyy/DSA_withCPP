/*
    Diamond Pattern : 
    For n=5,
    
        1 
      1 2 3
    1 2 3 4 5
  1 2 3 4 5 6 7
1 2 3 4 5 6 7 8 9
  1 2 3 4 5 6 7
    1 2 3 4 5
      1 2 3
        1
*/
#include <iostream>
using namespace std;

int main() {
    int n,key;

    cout<<"Enter the value of n : ";
    cin>>n;

    int cnt=n-1;
    for(int i=0;i<(2*n)-1;i++)
    {
        key=1;
        if(i<n)
        {
            for(int k=0;k<n-i-1;k++)
            cout<<"  ";
            for(int j=0;j<(2*i)+1;j++)
            {
                cout<<key<<" ";
                key++;
            }
        }
        else
        {
            for(int k=0;k<i-n+1;k++)
            cout<<"  ";
            for(int j=0;j<2*cnt-1;j++)
            {
                cout<<key<<" ";
                key++;
            }
            cnt--;
        }
        cout<<endl;
    }
    return 0;
}