#include <iostream>
#include <vector>
using namespace std;

void merge(vector<int> &arr,int st,int mid,int end)
{
    vector<int> temp;
    int i=st,j=mid+1;

    while(i<=mid && j<=end)
    {
        if(arr[i]<arr[j])
        {
            temp.push_back(arr[i]);
            i++;
        }
        else
        {
            temp.push_back(arr[j]);
            j++;
        }
    }

    while(i<=mid)
    {
        temp.push_back(arr[i]);
        i++;
    }
    while(j<=end)
    {
        temp.push_back(arr[j]);
        j++;
    }

    for(i=0;i<temp.size();i++)
    {
        arr[i+st]=temp[i];
    }

}
void mergeSort(vector<int> &arr,int start,int end)
{
    if(start<end)
    {
        int mid=start+(end-start)/2;
        mergeSort(arr,start,mid);
        mergeSort(arr,mid+1,end);
        merge(arr,start,mid,end);
    }
}
int main() {
    vector<int> arr={12,32,35,14,8,17};
    mergeSort(arr,0,arr.size()-1);
    cout<<"The sorted array is :\n";
    for(int i=0;i<arr.size();i++)
    cout<<arr[i]<<" ";
    return 0;
}