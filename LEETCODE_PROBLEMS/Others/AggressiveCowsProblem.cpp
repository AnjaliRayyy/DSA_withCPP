#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
bool isValid(vector<int> arr,int n,int c,int mid){  //O(n)
    int lastPos=arr[0], cows=1;
    for(int i=1;i<n;i++){
        if(arr[i]-lastPos>=mid){
            lastPos=arr[i];
            cows++;
        }
        if(cows==c) return true;
    }
    return false; 
}
int largestMinDist(vector<int>& arr,int n,int c){
    sort(arr.begin(),arr.end());    //sorting the array          n Log(n)

    if(c==2) return arr[n-1]-arr[0];  //Edge case

    int st=1,end=arr[n-1]-arr[0],mid,ans=-1;
    while(st<end){  // O(log(range) * n)
        mid=st+(end-st)/2;
        if(isValid(arr,n,c,mid))
        {
            ans=mid;
            st=mid+1;
        }
        else    end=mid-1;
    }
    return ans;
}
int main() {
    vector<int> arr={1,2,8,4,9};
    int n=5;
    int c=3;
    cout<<largestMinDist(arr,n,c);
    return 0;
}