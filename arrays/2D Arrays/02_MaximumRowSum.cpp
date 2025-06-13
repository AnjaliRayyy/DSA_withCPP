#include <iostream>
using namespace std;

int main() {
    int arr[4][3]={{5,2,4},{20,14,7},{88,2,4},{100,99,2}};
    int maxRowSum=INT32_MIN;

    for(int i=0;i<4;i++)
    {
        int rowSum=0;
        for(int j=0;j<3;j++)
        {
            rowSum+=arr[i][j];
        }
        if(rowSum>maxRowSum)
        maxRowSum=rowSum;
    }

    cout<<"Maximum Row Sum: "<<maxRowSum<<endl;
    return 0;
}