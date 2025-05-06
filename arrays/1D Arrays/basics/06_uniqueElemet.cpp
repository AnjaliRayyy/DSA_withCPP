/*
    WAF to print all the unique elements present in the array.
*/
#include <iostream>
using namespace std;

int* uniqueElements(int arr[], int n)
{
    int i, j ,flag;
    for (i = 0; i < n; i++)
    {
        flag=0;
        for(j=0;j<n;j++)
        {
            if((i!=j) && (arr[i]==arr[j]))
            {
                flag=1;
                break;
            }
        }
        if(flag==0)
        {
            cout<<arr[i]<<" ";
        }
    }
}

int main() {
    int arr[]={1,2,3,4,2,3,9,5,2,3,1};
    int n = sizeof(arr)/sizeof(arr[0]);
    uniqueElements(arr,n);
    return 0;
}