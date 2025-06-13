#include <iostream>
using namespace std;

int main() {
    int arr[4][3]={{5,2,4},{20,14,7},{88,2,4},{100,99,2}};
    int maxColSum=INT32_MIN;
    for(int j=0;j<3;j++)
    {
        int colSum=0;
        for(int i=0;i<4;i++)
        colSum+=arr[i][j];
        
        maxColSum=max(maxColSum,colSum);
    }
    cout<<"Maximum column sum: "<<maxColSum<<endl;
    return 0;
}