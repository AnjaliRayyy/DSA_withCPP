#include <iostream>
#include <vector>
using namespace std;
bool isValid(vector<int> arr,int n,int m,int maxAllowed){
    int painter=1, time=0;
    for(int i=0;i<arr.size();i++){
        if(arr[i]>maxAllowed)   return false;
        if(time+arr[i]<=maxAllowed) time+=arr[i];
        else{
            painter++;
            time=arr[i];
        }
    }
    if(painter<=m)  return true;
    else return false;
}
int minTimeTaken(vector<int>& nums,int n,int m){
    int sum=0,maxTime=INT32_MIN;
    //Calculating the maximum time required
    for(int i=0;i<nums.size();i++){
        sum+=nums[i];
        maxTime=max(maxTime,nums[i]);
    }
    if(m==1) return sum;
    int st=maxTime,end=sum,mid,ans=-1;
    while(st<end){
        mid=st+(end-st)/2;
        if(isValid(nums,n,m,mid)){
            ans=mid;
            end=mid-1;
        }
        else{
            st=mid+1;
        }
    }
    return ans;
}
int main() {
    vector<int> a={40,30,10,20};
    int n=4,m=2;
    cout<<minTimeTaken(a,n,m);
    return 0;
}