#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;
void getPerms(vector<int> &arr,int index,vector<vector<int>> &ans){
    if(index == arr.size()){
        ans.push_back({arr});
        return;
    }
    for(int i=index;i<arr.size();i++){
        swap(arr[index],arr[i]);
        getPerms(arr,index+1,ans);
        swap(arr[index],arr[i]);
    }
}
int main() {
    vector<vector<int>> ans;
    vector<int> arr={1,2,3};
    getPerms(arr,0,ans);
    for(auto key: ans){
        for(int val: key){
            cout<<val<<" ";
        }
        cout<<endl;
    }
    return 0;
}