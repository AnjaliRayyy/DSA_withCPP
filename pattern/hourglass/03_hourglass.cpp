/*
    Hourglass Pattern : 
    For n=5,

 1 2 3 4 5 6 7 8 9 
  1 2 3 4 5 6 7
    1 2 3 4 5 
      1 2 3
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
    char key;

    cout<<"Enter the value of n : ";
    cin>>n;

    int cnt=1;
    for(int i=1;i<=(2*n)-1;i++)
    {
        key='A';
        if(i<=n)
        {
            for(int k=1;k<=i-1;k++)
            cout<<"  ";
            for(int j=1;j<=2*(n-i)+1;j++)
            cout<<key++<<" ";
        }
        else
        {
            for(int k=1;k<=n-cnt-1;k++)
            cout<<"  ";
            for(int j=1;j<=2*(i-n)+1;j++)
            cout<<key++<<" ";
            cnt++;
        }
        cout<<endl;
    }
    return 0;
}