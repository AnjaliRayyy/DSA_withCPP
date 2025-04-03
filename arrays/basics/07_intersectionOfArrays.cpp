/*
    WAF to print intersection of 2 arrays
 */

 #include <iostream>
 using namespace std;
 
 void intersection(int arr1[],int arr2[],int n1, int n2)
 {
    for(int i=0;i<n1;i++)
    {
        for(int j=0;j<n2;j++)
        {
            if(arr1[i]==arr2[j])
            cout<<arr1[i]<<" ";
        }
    }
 }

 int main() {
    int arr1[]={1,5,4,7,88,96,54,71};
    int n1=sizeof(arr1)/sizeof(arr1[0]);
    int arr2[]={12,47,20,16,47,71,4,5};
    int n2=sizeof(arr2)/sizeof(arr2[0]);

    intersection(arr1,arr2,n1,n2);

    return 0;
 }