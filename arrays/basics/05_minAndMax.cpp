/*
    WAP to swap the minimun and maximum element in the array.
*/

#include <iostream>
using namespace std;

int main() {
    int arr[]={3,4,500,6,7,8,2,87,-1};
    int size=sizeof(arr)/sizeof(arr[0]);
    int i_min=0,i_max=0;

    for(int i=0;i<size;i++)
    {
        if(arr[i]<arr[i_min])
        i_min=i;    //storing the index of the minimum element present in the array   

        if(arr[i]>arr[i_max])
        i_max=i;    //storing the index of the maximum element present in the array
    }

    swap(arr[i_min],arr[i_max]);        //swapping min and max elements in the array

    // <-----------------Printing the array after swapping minimum and maximum elements------------>
    cout<<"After swapping the array is "<<endl;
    for(int i=0;i<size;i++)
    {
        cout<<arr[i]<<" ";
    }

    return 0;
}