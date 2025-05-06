#include <iostream>
#include <math.h>
using namespace std;

int main() {
    int n,num,sum=0;
    cout<<"Enter a number : ";
    cin>>n;

    int nod=(int) (log10(n)+1);
    cout<<nod<<endl;
    num=n;
    while(num>0)
    {
        sum+=round(pow(num%10,nod));
        num/=10;
    }
    cout<<sum<<endl;
    if(n==sum)
    cout<<n<<" is an Armstrong Number";
    else
    cout<<n<<" is not an Armstrong Number";

    return 0;
}