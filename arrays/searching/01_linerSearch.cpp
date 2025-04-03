/*
    A linear search is the simplest approach employed to search for an element in a data set. It examines each element until it finds a match, starting at the beginning of the data set, until the end. The search is finished and terminated once the target element is located. If the algorithm reaches the end of the list without a successful match, the search terminates unsuccessfully.
    
     The linear search algorithm is simple to implement and has a time complexity of O(n), where n is the number of elements in the list.
*/

#include <iostream>
using namespace std;

int linearSearch(int arr[],int size,int element)
{
    for(int i=0;i<size;i++)
    {
        if(arr[i]==element)
        return i;
    }
    return -1;
}

int main() {
    int arr[]={4,5,8,74,12,69,5};
    int size=sizeof(arr)/sizeof(arr[0]);
    int element;

    cout<<"Enter the element to be searched : ";
    cin>>element;

    cout<<"Element "<<element<<" is at index "<<linearSearch(arr,size,element)<<endl;
    return 0;
}