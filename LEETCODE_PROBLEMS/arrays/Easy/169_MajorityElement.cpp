#include <iostream>
#include <vector>
#include <cmath>
#include <algorithm>
using namespace std;

int main() {
    vector<int> nums={2,2,1,1,1,2,2,1,1};
    int n=nums.size();
    int majElem=0,cnt=0;

//  <------------------------Brute Force Approach--------------------------->
    // for(int i=0;i<n;i++){
    //     cnt=0;      
    //         for(int j=0;j<n;j++)
    //         {
    //             if(nums[j]==nums[i])
    //             cnt++;
    //         }
    //         if(cnt>floor(n/2)
    //         {
    //             majElem=nums[i];
    //             break;
    //         }   
    // }
    // cout<<"The majority element is : "<<majElem<<endl;

// <-----------------------------Optimized Approach------------------------>
    // sort(nums.begin(),nums.end());
    // majElem=nums[0],cnt=1;
    // for(int i=1;i<n;i++)
    // {
    //     if(nums[i]==nums[i-1])
    //     cnt++;
    //     else
    //     {
    //         majElem=nums[i];
    //         cnt=1;
    //     }

    //     if(cnt>floor(n/2))
    //       break;
    // }
    // cout<<"The majority element is : "<<majElem<<endl;

// <------------------------Moore's Voting Algorithm-------------------------------->
    int freq=0,ans=0;
    for(int i=0;i<nums.size();i++)
    {
        if(freq==0)
        ans=nums[i];

        if(ans==nums[i])
        freq++;
        else
        freq--;
    } 
    cout<<"The majority element is : "<<ans<<endl;
    
    return 0;
}