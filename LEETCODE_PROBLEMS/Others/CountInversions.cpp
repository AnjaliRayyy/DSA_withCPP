#include <iostream>
#include <vector>
using namespace std;
int merge(vector<int> &arr,int st,int mid,int end){
    vector<int> temp;
    int i=st,j=mid+1;
    int cntInv=0;
    while(i<=mid && j<=end){
        if(arr[i]<arr[j]){
            temp.push_back(arr[i]);
            i++;
        }
        else{
            temp.push_back(arr[j]);
            cntInv+=(mid-i+1);
            j++;
        }
    }
    while(i<=mid){
        temp.push_back(arr[i]);
        i++;
    }
    while(j<=end){
        temp.push_back(arr[j]);
        j++;
    }
    for(int idx=0;idx<temp.size();idx++){
        arr[st+idx]=temp[idx];
    }
    return cntInv;
}
void countInversions(vector<int> &arr,int st,int end,int &ans){
    if(st<end){
        int mid=st+(end-st)/2;
        countInversions(arr,st,mid,ans);
        countInversions(arr,mid+1,end,ans);
        ans+=merge(arr,st,mid,end);
    }
}
int main() {
    vector<int> arr={1,3,5,10,2,6,8,9};
    int ans =0;
    countInversions(arr,0,arr.size()-1,ans);
    cout<<ans;
    return 0;
}