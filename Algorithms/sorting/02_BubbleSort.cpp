#include <iostream>
#include <vector>
using namespace std;

int main() {
    vector<int> arr={10,1,15,7,8,23,9};
    int n= arr.size();

    for(int i=0;i<n-1;i++)
    {
        bool swapped=false;
        for(int j=0;j<n-i-1;j++)
        {
            if(arr[j]>arr[j+1])
            {
                swap(arr[j],arr[j+1]);
                swapped=true;
            }
        }
        if(!swapped) break;
    }
    cout<<"Sorted array is : ";
    for(int i=0;i<n;i++)
    cout<<arr[i]<<" ";
    return 0;
}