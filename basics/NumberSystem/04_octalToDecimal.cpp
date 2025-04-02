/*WAP to convert a number from octal number system to decimal number system.
  Example :   145 ---> 101 
              17541 ---> 8033
*/
#include <iostream>
using namespace std;

int main() {
    int octal,decimal,num,rem,pow;

    cout<<"Enter the octal number : ";
    cin>>octal;

    num=octal;
    pow=1;
    decimal=0;
    while(num>0)
    {
        rem=num%10;
        num=num/10;
        decimal=decimal+(rem*pow);
        pow=pow*8;
    }

    cout<<"Decimal equivalent of octal "<<octal<<" is : "<<decimal;
    return 0;
}