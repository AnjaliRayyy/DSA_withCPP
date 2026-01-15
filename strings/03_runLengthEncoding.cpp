#include <iostream>
#include <string>
using namespace std;
string runLengthEncoding(string str){
        string ans="";
        for(int i=0;i<str.length();i++){
            int cnt=0;
            char ch=str[i];
            while(i<str.length()  && str[i]==ch){
                cnt++;
                i++;
            }
            ans+=to_string(cnt)+ch;
            i--;
        }
        return ans;
    }
int main() {
    string ans=runLengthEncoding("3322251");
    cout<<ans;
    return 0;
}