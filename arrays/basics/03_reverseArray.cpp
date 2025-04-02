#include <iostream>
using namespace std;
void reverseArray(int arr[],int n)
{
    
    int temp;
    for(int i=0;i<(n/2);i++)
    {
        temp=arr[i];
        arr[i]=arr[n-i-1];
        arr[n-i-1]=temp;
    }
}

int main() {
    int arr[]={2,3,4,5,6,7,10};
    int n = sizeof(arr)/sizeof(arr[0]);

    cout<<"Original array : ";
    for(int i=0;i<n;i++)
    cout<<arr[i]<<" ";
    cout<<endl;

    reverseArray(arr,n);

    cout<<"Reversed array : ";
    for(int i=0;i<n;i++)
    cout<<arr[i]<<" ";
    cout<<endl;
    return 0;
}