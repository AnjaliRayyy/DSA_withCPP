/*  WAP to convert a number from decimal number system to octal number system.
    Example :   147 ----> 223 
                1856 ---> 3500
*/

#include <iostream>
using namespace std;

int main() {
    int decimal,octal,rem,pow,num;

    cout<<"Enter the decimal number : ";
    cin>>decimal;

    num=decimal;
    octal=0;
    pow=1;
    while(num>0)
    {
        rem=num%8;
        num=num/8;
        octal=octal+(rem*pow);
        pow=pow*10;
    }

    cout<<"The octal equivalent of the decimal number "<<decimal<<" is : "<<octal;
    return 0;
}
