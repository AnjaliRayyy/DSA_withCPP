#include <iostream>
#include <vector>
using namespace std;

int main() {
    vector<int> arr={1,8,4,7,10,2,15,6};
    int n = arr.size();
    int prev,curr;

    for(int i=1;i<n;i++)
    {
        curr=arr[i];
        prev=i-1;
        while(prev>=0 && curr<arr[prev])
        {
            arr[prev+1]=arr[prev];
            prev--;
        }
        arr[prev+1]=curr;
    }
    cout<<"After Sorting : "<<endl;
    for(int i=0;i<n;i++)
    cout<<arr[i]<<" ";
    return 0;
}