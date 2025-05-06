#include <iostream>
using namespace std;

int main() {
    int arr[]={1,2,3,4,5,6,7};
    int size=sizeof(arr)/sizeof(arr[0]);
    int sum=0,prod=1;

    for(int i=0;i<size;i++)
    {
        sum+=arr[i];
        prod*=arr[i];
    }

    cout<<"Sum of all the elements of the array : "<<sum<<endl;
    cout<<"Priduct of all the elements of the array : "<<prod<<endl;
    
    return 0;
}