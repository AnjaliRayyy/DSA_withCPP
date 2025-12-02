/*
Inverted Character Triangle
For n=4,
AAAA
 BBB
  CC
   D
*/
#include <iostream>
using namespace std;
int main(){
    printf("Enter the value of n: ");
    int n;
    cin>>n;
    for(int i=0;i<n;i++)
    {
        //for printing the spaces
        for(int j=0;j<i;j++)
        {
            cout<<" ";
        }
        //for printing the characters
        for(int k=0;k<n-i;k++)
        {
            cout<<char(65+i);
        }
        cout<<endl;
    }
    return 0;
}