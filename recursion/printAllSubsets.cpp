#include <iostream>
#include <vector>
using namespace std;
void printSubsets(vector<int> arr,vector<int> &ans,int i){
    if(i==arr.size()){
        for(int val: ans)
        cout<<val<<" ";
        cout<<endl;
        return;
    }
    ans.push_back(arr[i]);
    printSubsets(arr,ans,i+1);
    ans.pop_back();
    printSubsets(arr,ans,i+1);
}
int main() {
    vector<int> set = {1, 2, 3};
    vector<int> ans;
    printSubsets(set,ans,0);
    return 0;
}