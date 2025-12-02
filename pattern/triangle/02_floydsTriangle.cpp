/*
Floyd's Triangle
For n=4,
1 
2 3
4 5 6
7 8 9 10
*/
#include <iostream>
using namespace std;
int main(){
    printf("Enter the value of n: ");
    int n;
    cin>>n;
    int num=1;
    for(int i=0;i<n;i++){
        for(int j=0;j<=i;j++){
            cout<<num++<<" ";
        }
        cout<<endl;
    }
    return 0;
}