/*
    Binary search is a highly efficient algorithm used to find the position of a target value within a sorted array or list by repeatedly dividing the search interval in half.

    Binary search has a time complexity of O(log n), meaning the time it takes to search increases logarithmically with the size of the input, making it significantly faster than linear search (O(n)) for large datasets. 
*/

#include <iostream>
using namespace std;

int main()
{
    int arr[]={1,3,4,5,6,9,10,15,18};
    int n = sizeof(arr)/sizeof(arr[0]);
    int start=0,end=n-1,mid,target,flag=0;

    cout<<"Enter the target : ";
    cin>>target;

    while(start<=end)
    {
        mid=(start+end)/2;
        if(arr[mid]==target)
        {
            flag=1;
            break;
        }
        else if(arr[mid]>target)
        end=mid-1;
        else
        start=mid+1;
    }
    mid=flag==0?-1:mid;
    cout<<"Taget element "<<target<<" was found at index "<<mid;
    return 0;
}