/*
    Bitwise operators perform operations on individual bits of integer data, including AND (&), OR (|), XOR (^), NOT (~), left shift (<<), and right shift (>>). These operators are crucial for low-level programming, embedded systems, and tasks requiring precise bit manipulation. 

    Bitwise AND (&):
    Compares each bit of two operands. If both bits are 1, the resulting bit is 1; otherwise, it's 0. 
    Example: 10 & 5 (1010 & 0101) results in 0 (0000). 

    Bitwise OR (|):
    Compares each bit of two operands. If either or both bits are 1, the resulting bit is 1; otherwise, it's 0. 
    Example: 10 | 5 (1010 | 0101) results in 15 (1111). 

    Bitwise XOR (^):
    Compares each bit of two operands. If the bits are different, the resulting bit is 1; otherwise, it's 0. 
    Example: 10 ^ 5 (1010 ^ 0101) results in 15 (1111). 

    Bitwise NOT (~):
    Inverts all bits of an operand (0 becomes 1, and 1 becomes 0). 
    Example: ~10 ( ~1010) results in -11 (1's complement of 1010). 

    Left Shift (<<):
    Shifts all bits of an operand to the left by a specified number of positions, effectively multiplying the value by 2 for each shift. 
    Example: 10 << 2 (1010 << 2) results in 40 (101000). 

    Right Shift (>>):
    Shifts all bits of an operand to the right by a specified number of positions, effectively dividing the value by 2 for each shift. 
    Example: 10 >> 2 (1010 >> 2) results in 2 (0010). 

*/
#include <iostream>
using namespace std;

int main() {
    int a,b;

    cout<<"Enter the value of a : ";
    cin>>a;
    cout<<"Enter the value of b : ";
    cin>>b;

    cout<<"Bitwise AND of "<<a<<" and "<<b<<" is "<<(a&b)<<endl;    //Bitwise &
    cout<<"Bitwise OR of "<<a<<" and "<<b<<" is "<<(a|b)<<endl;     //Bitwise |
    cout<<"Bitwise XOR of "<<a<<" and "<<b<<" is "<<(a^b)<<endl;    //Bitwise ^
    cout<<"Bitwise NOT of "<<a<<" is "<<~a<<endl;                   //Bitwise ~
    cout<<"Bitwise left shif of "<<a<<" is "<<(a<<b)<<endl;         //Bitwise << (left shift)
    cout<<"Bitwise right shif of "<<a<<" is "<<(a>>b)<<endl;        //Bitsie >> (right shift)
    return 0;
}