#include <iostream>
#include <stack>
#include <vector>
using namespace std;
int findCeleb(vector<vector<int>> arr){
 stack<int> s;

    for(int i=arr.size()-1;i>=0;i--){
        s.push(i);
    }

    while(s.size()>1){
        int i=s.top();
        s.pop();
        int j=s.top();
        s.pop();

        if(arr[i][j]==0)    s.push(i);
        else  s.push(j);

    }
    int celeb=s.top();
    for(int j=0;j<arr.size();j++){
        if( (j!=celeb) &&(arr[celeb][j]==1 || arr[j][celeb]==0))  return -1;
    }
    return s.top();    
}
int main() {
    vector<vector<int>> arr={{0,0,1},{1,0,1},{0,0,0}};
   cout<<findCeleb(arr);
    return 0;
}