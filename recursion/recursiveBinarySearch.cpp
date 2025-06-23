#include <iostream>
#include <vector>
using namespace std;
int binarySearch(vector<int> nums,int target,int start,int end)
{
    if(start>end)   return -1;
    else
    {
        int mid=start+(end-start)/2;
        if(nums[mid]==target)
        return mid;
        else if (nums[mid]>target)  return binarySearch(nums,target,start,mid-1);
        else  return binarySearch(nums,target,mid+1,end);
    } 
}
int main()
{
    vector<int> arr={10,20,30,40,50,60,70,80,90};
    int target =70;

    cout<<binarySearch(arr,target,0,arr.size()-1)<<endl;
    return 0;
}