#include <iostream>
using namespace std;

int main() {
    int n;
    cout<<"Enter the size of the array : ";
    cin>>n;

    int arr[n];

    cout<<"Enter the "<<n<<" elements of the array : ";
    for(int i=0;i<n;i++)
    cin>>arr[i]; 

    cout<<"The elements present in the array are : ";
    for(int i=0;i<n;i++)
    cout<<arr[i]<<" ";

    return 0;
}