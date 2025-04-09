/*
Given an integer array nums, find the subarray with the largest sum, and return its sum.

        Example 1:

        Input: nums = [-2,1,-3,4,-1,2,1,-5,4]
        Output: 6
        Explanation: The subarray [4,-1,2,1] has the largest sum 6.
        Example 2:

        Input: nums = [1]
        Output: 1
        Explanation: The subarray [1] has the largest sum 1.
        Example 3:

        Input: nums = [5,4,-1,7,8]
        Output: 23
        Explanation: The subarray [5,4,-1,7,8] has the largest sum 23.
        

Constraints:

1 <= nums.length <= 105
-104 <= nums[i] <= 104
 

            Follow up: If you have figured out the O(n) solution, try coding another solution using the divide and conquer approach, which is more subtle.

    Using Brute Force Method the time complexity to solve the problem is O(n^2) where n is the number of elements in the array. 
    The space complexity is O(1) as we are not using any extra space.

    However, using Kadanes's Alogrithm the problem can be solved with a time complexity of O(n) and a space complexity of O(1).

*/
#include <iostream>
#include <vector>
using namespace std;

int maxSubArray(vector<int>& nums) {
        int currSum=0;
        int maxSum=INT32_MIN;

        for(int i=0;i<nums.size();i++)
        {
            currSum+=nums[i];
            maxSum=max(maxSum,currSum);
            if(currSum<0)
            currSum=0;
        }
        return maxSum;
    }

int main() {
    vector<int> nums = {-2,1,-3,4,-1,2,1,-5,4};
    cout<<maxSubArray(nums)<<endl;
    return 0;
}