#include <iostream>
#include <vector>
using namespace std;

int main() {
    vector<int> nums={1,2,3,4,6};
    vector<int> answer(nums.size(),1); 
    int suffix=1;
 
    for(int i=1;i<nums.size();i++)
    {
        answer[i]=answer[i-1]*nums[i-1];
    }
    
    
    for(int i=nums.size()-2;i>=0;i--)
    {
        suffix*=nums[i+1];
        answer[i]*=suffix;
    }

    for (int val : answer)
    cout << val << " ";

    return 0;
}