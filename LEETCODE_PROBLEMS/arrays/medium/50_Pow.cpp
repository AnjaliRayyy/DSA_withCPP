/*
    Implement pow(x, n), which calculates x raised to the bin_Exponent n (i.e., x^n).

    Example 1:

        Input: x = 2.00000, n = 10
        Output: 1024.00000

    Example 2:

        Input: x = 2.10000, n = 3
        Output: 9.26100 

    Example 3:

        Input: x = 2.00000, n = -2
        Output: 0.25000
        Explanation: 2-2 = 1/22 = 1/4 = 0.25
 

Constraints:

-100.0 < x < 100.0
-231 <= n <= 231-1
n is an integer.
Either x is not zero or n > 0.
-104 <= xn <= 104

*/

#include <iostream>
using namespace std;

int bin_Exponent(int x, int n) {
    int binForm=n,ans=1;

    if(n==0)  return 1;
    if(x==0)  return 0;
    if(x==1)  return 1;
    if(x==-1)  return (n%2==0)?1:-1;

    if(binForm<0)
    {
        x=x/x;
        binForm=-binForm;
    }

    while(binForm>0){
        if(binForm%2==1){
            ans=ans*x;
        }
        x=x*x;
        binForm=binForm/2;
    }
    return ans;
}
int main() {
    int x=3, n=5;
    cout<<bin_Exponent(x,n);
    return 0;
}

// Note : Time complexity is O(log n).