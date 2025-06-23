#include <iostream>
#include <vector>
#include <unordered_map>
#include <algorithm>
using namespace std;
vector<int> twoSum(vector<int>& nums, int target) 
{
    vector<int> ans;
    // <---------Brute Force Approach--------->
            // for(int i=0;i<nums.size()-1;i++)
            // {
            //     for(int j=i+1;j<nums.size();j++)
            //     {            
            //         if(nums[i]+nums[j]==target)
            //         {
            //             ans.push_back(i);
            //             ans.push_back(j);
            //             break;
            //         }
            //     }
            // }

    //<----------Two Pointer Approach--------->
            // sort(nums.begin(),nums.end());
            // int s=0,e=nums.size()-1;
            // while(s<e)
            // {
            //     if(nums[s]+nums[e]==target)
            //     {
            //         ans.push_back(s);
            //         ans.push_back(e);
            //         break;
            //     }
            //     if(nums[s]+nums[e]<target)
            //     s++;
            //     else
            //     e--;
            // }

    //<----------Optimized Approach (Hashing)--------->
    unordered_map<int,int> m;
    for(int i=0;i<nums.size();i++)
    {
        int key=target-nums[i];
        if(m.find(key)!=m.end())
        {
            ans.push_back(i);
            ans.push_back(m[key]);
            break;
        }
        else
        m.insert({nums[i],i});
    }
   return ans; 
}
int main() {
    vector<int> arr={2,7,11,15};
    vector<int> result=twoSum(arr,9);

    for(int val:result)
    {
        cout<<arr[val]<<endl;
    }
    return 0;
}