/*WAP to convert a number from decimal number system to binary number system.
  Example : 42 ---> 101010
*/

#include <iostream>
using namespace std;

int main() {
    int decimal,num;
    long binary=0,rem=0,pow=1;

    cout<<"Enter the number : ";
    cin>>decimal;
     
    num=decimal;
    while(num>0)
    {
        rem=num%2;   
        num=num/2;
        binary=binary+(rem*pow);
        pow=pow*10;
    }

    cout<<"Binary representation of "<<decimal<<" is "<<binary<<endl;
    return 0;
}