#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;
void getPerms(string &str,int index,vector<string> &ans){
    if(index==str.length()){
        ans.push_back(str);
        return;
    }
    for(int i=index;i<str.length();i++){
        swap(str[index],str[i]);
        getPerms(str,index+1,ans);
        swap(str[index],str[i]);
    }
}
int main() {
    string str="abc";
    vector<string> ans;
    getPerms(str,0,ans);
    for(auto key: ans){
        cout<<key<<endl;
    }
    return 0;
}