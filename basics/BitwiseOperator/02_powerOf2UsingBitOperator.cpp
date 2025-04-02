#include <iostream>
using namespace std;
bool powerOf2(int n)
{
    if(!(n&(n-1)))
        return true;
    else
        return false;
}
int main() {
    int n;

    cout<<"Enter the number : ";
    cin>>n;

    if(powerOf2(n))
        cout<<"The number is a power of 2";
    else
        cout<<"The number is not a power of 2";
    return 0;
}