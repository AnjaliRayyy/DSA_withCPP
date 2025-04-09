#include <iostream>
#include <vector>
using namespace std;

int main() {
    vector<int> nums={0,1,2,2,3,0,4,2};
    int val=2;

    int start=0,end=nums.size()-1;
        while(start<=end)
        {
            if(nums[start]==val)
            {
                swap(nums[start],nums[end]);
                nums.pop_back();
                end--;
            }
            else
            start++;
        }
        cout<<"Array after removing the element :"<<endl;
        for(int val: nums)
        cout<<val<<" ";
        cout<<endl;
        cout<<"Size of the array : "<<nums.size()<<endl;
    return 0;
}