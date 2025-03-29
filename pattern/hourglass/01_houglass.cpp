/*
    Hourglass Pattern : 
    For n=8,

 * * * * * * * * * * * * * * * 
   * * * * * * * * * * * * * 
    * * * * * * * * * * * 
      * * * * * * * * * 
        * * * * * * * 
          * * * * * 
            * * * 
              * 
            * * * 
          * * * * * 
        * * * * * * * 
      * * * * * * * * * 
    * * * * * * * * * * * 
  * * * * * * * * * * * * * 
* * * * * * * * * * * * * * * 

*/
#include <iostream>
using namespace std;

int main() {
    int n;

    cout<<"Enter the value of n : ";
    cin>>n;

    int cnt=1;
    for(int i=1;i<=(2*n)-1;i++)
    {
        if(i<=n)
        {
            for(int k=1;k<=i-1;k++)
            cout<<"  ";
            for(int j=1;j<=2*(n-i)+1;j++)
            cout<<"* ";
        }
        else
        {
            for(int k=1;k<=n-cnt-1;k++)
            cout<<"  ";
            for(int j=1;j<=2*(i-n)+1;j++)
            cout<<"* ";
            cnt++;
        }
        cout<<endl;
    }
    return 0;
}