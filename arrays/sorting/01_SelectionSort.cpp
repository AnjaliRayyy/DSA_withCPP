/*
    Selection Sort is a simple comparison-based sorting algorithm. It works by repeatedly selecting the smallest (or largest) element from the unsorted part and moving it to the beginning.

     How it works step-by-step:
       - Start from the beginning of the array.

       - Find the smallest element in the unsorted part.

       - Swap it with the first unsorted element.

       - Move the boundary of the sorted and unsorted parts forward.

       - Repeat until the whole array is sorted.

    Time complexity: O(n^2) in the worst case, where n is the number of items being.

*/

#include <iostream>
using namespace std;

void display(int arr[],int n)
{
    for(int i=0;i<n;i++)
    cout<<arr[i]<<" ";
}
int main() {
    int arr[]={5,1,7,4,2,3,9,10,8,6};
    int n=sizeof(arr)/sizeof(arr[0]);

    cout<<"Array before sorting : ";
    display(arr,n);
    for(int i=0;i<n-1;i++)
    {
        for(int j=i+1;j<n;j++)
        {
            if(arr[j]<arr[i])
            swap(arr[i],arr[j]);
        }
    }

    cout<<"\nArray after sorting : ";
    display(arr,n);
    return 0;
}
