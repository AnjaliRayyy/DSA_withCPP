#include <iostream>
using namespace std;
void reverseArray(int arr[],int n)
{
    // <---------------- Using for loop --------------->
    // int temp;
    // for(int i=0;i<(n/2);i++)
    // {
    //     swap(arr[i],arr[n-i-1]);
    // }

    // <---------------- Using while loop --------------->
    int start=0,end=n-1;
    while(start<=end)
    {
        swap(arr[start],arr[end]);
        start++;
        end--;
    }
}

int main() {
    int arr[]={2,3,4,5,6,10,23};
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