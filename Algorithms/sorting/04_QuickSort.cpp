#include <iostream>
#include <vector>
using namespace std;
int partition(vector<int> &arr,int st,int end)
{
    cout<<"I am partition";
    int idx=st-1;
    for(int j=st;j<end;j++)
    {
        if(arr[j]<arr[end])
        {
            idx++;
            swap(arr[idx],arr[j]);
        }
    }
    idx++;
    swap(arr[idx],arr[end]);
    return idx;
}
void quickSort(vector<int> &arr,int start,int end)
{      
    cout<<"I am quickSort";
    if(start<end)
    {
        int pivotIndex = partition(arr,start,end);
        quickSort(arr,start,pivotIndex-1);
        quickSort(arr,pivotIndex+1,end);
    }
}
int main() {
    vector<int> arr={5,2,6,4,1,3};
    quickSort(arr,0,arr.size()-1);

    cout<<"Sorted Array:\n";
    for(int i=0;i<arr.size();i++)
    {
        cout<<arr[i]<<" ";
    }
    return 0;
}