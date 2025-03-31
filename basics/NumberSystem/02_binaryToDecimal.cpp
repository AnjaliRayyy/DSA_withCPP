/*WAP to convert a number from binary number system to decimal number system.
  Example :   101010 ---> 42
*/
#include <iostream>
using namespace std;

int main() {
    int decimal=0,rem,pow=1;
    long binary,num;

    cout<<"Enter the binary number : ";
    cin>>binary;

    num=binary;
    while(num>0)
    {
        rem=num%10;
        num=num/10;
        decimal=decimal+(rem*pow);
        pow=pow*2;
    }

    cout<<"The decimal equivalent of binary number "<<binary<<" is "<<decimal;

    return 0;
}