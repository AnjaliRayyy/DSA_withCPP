#include <iostream>
using namespace std;

int main() {
    int size;
    int min=INT32_MAX;
    int max=INT32_MIN;

    cout<<"Enter the size of the array : ";
    cin>>size;

    int arr[size];

    cout<<"Enter "<<size<<" elements in the array : "<<endl;
    for(int i=0;i<size;i++)
        cin>>arr[i];

    for(int i=0;i<size;i++)
    {
        if(arr[i]<min)
            min=arr[i];
        if(arr[i]>max)
            max=arr[i];
    }
    
    cout<<"Smallest Number present in the array is : "<<min<<endl;
    cout<<"Largest Number present in the array is : "<<max<<endl;
    return 0;
}