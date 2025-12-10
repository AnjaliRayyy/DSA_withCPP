#include <iostream>
#include <vector>
using namespace std;

string prefix(string pre,string str)
{
    if(pre[0]!=str[0])
    return "";
    else
    {
        string ans="";
        int i=0;
        while(pre[i]==str[i])
        {
            ans=ans+pre[i];
            i++;
        }
        return ans;

    }
}
string longestCommonPrefix(vector<string> strs) {
    string pre=strs[0];
    for(int i=1;i<strs.size();i++)
    {
        if(pre=="")
        return "";
        else
        {
            pre=prefix(pre,strs[i]);
        }
    }
    return pre;
}
int main() {
    vector<string> strs={"flower","flower","flower","car"};
    cout<<longestCommonPrefix(strs);
    return 0;
}