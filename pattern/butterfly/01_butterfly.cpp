/*
    Butterfly pattern : 
    For n=4,
        *             * 
        * *         * *
        * * *     * * *
        * * * * * * * *
        * * * * * * * * 
        * * *     * * *
        * *         * *
        *             *
*/
#include <iostream>
using namespace std;

int main() {
    int n,star,space;

    cout<<"Enter the value of n : ";
    cin>>n;

    for(int i=1;i<=2*n;i++)
    {
        if(i<=n)
        {
            star=i;
            space=2*(n-i);
        }
        else
        {
            star=i-(2*(i-n)-1);
            space=2*(i-n-1);
        }

        for(int k=1;k<=star;k++)
        cout<<"* ";
        for(int j=1;j<=space;j++)
        cout<<"  ";
        for(int k=1;k<=star;k++)
        cout<<"* ";

        cout<<endl;
    }
    return 0;
}