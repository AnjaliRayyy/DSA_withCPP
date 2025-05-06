#include <iostream>
using namespace std;
int greatestComDiv(int n1,int n2)
{
    if(n1==0)
    return n2;
    else if(n2==0)
    return n1;
    else
    {
        // <-------------Euclid's Algorithm-------------->
            // if(n1>=n2)
            // return greatestComDiv(n1-n2,n2);
            // else
            // return greatestComDiv(n1,n2-n1);
        
        // <-----------------Futher optimization--------------->
        if(n1>=n2)
        return greatestComDiv(n1%n2,n2);
        else
        return greatestComDiv(n1,n2%n1);
    }
}
int main() {
    int n1,n2,gcd=1;
    cout<<"Enter the first number : ";
    cin>>n1;
    cout<<"Enter the second number : ";
    cin>>n2;
    // <-----------------Brute Force Logic------------------>
        // for(int i=2;i<min(n1,n2);i++)
        // {
        //     if(n1%i==0 && n2%i==0)
        //     gcd=i;
        // }
        // cout<<"GCD of "<<n1<<" and "<<n2<<" is: "<<gcd;

    //<-------------------Optimized Approach-------------->
    cout<<"GCD of "<<n1<<" and "<<n2<<" is: "<<greatestComDiv(n1,n2);
    return 0;
}