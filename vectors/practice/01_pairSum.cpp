#include <iostream>
#include <vector>
using namespace std;

int main() {
    vector<int> vec={2,7,11,15};
    int target=26;
    int n=vec.size();
    int sum=0,i1,i2;
    int start=0,end=n-1;

    while(start<end){
        if(vec[start]+vec[end]==target)
       break;
       else if(vec[start]+vec[end]>target)
       end--;
       else
       start++;
    }
    
    cout<<"The elements present at index "<<start<< " and "<<end<<endl;
    return 0;
}