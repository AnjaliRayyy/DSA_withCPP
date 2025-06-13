// Diagonal sum= Sum of elements of primary diagonal + Sum of elements of secondary diagonal - common elements
#include <iostream>
using namespace std;

int main() {
    int sum=0;
    int arr[4][4]={{1,2,3,4},{5,6,7,8},{10,11,12,13},{14,15,16,17}};

    // <-----------------Brute Force--------------->
    //     for(int i=0;i<4;i++)
    //     {
    //         for(int j=0;j<4;j++)
    //         {
    //             if(i==j)
    //             sum+=arr[i][j];
    //             else if(j==(4-1-i))
    //             sum+=arr[i][j];
    //         }
    //     }

    // <-------------Optimized Logic----------->
        for(int i=0;i<4;i++)
        {
            sum+=arr[i][i];
            if(i!=(4-1-i))
            sum+=arr[i][4-i-1];
        }
    cout<<"Sum of Diagonal elements : "<<sum<<endl;
    return 0;
}