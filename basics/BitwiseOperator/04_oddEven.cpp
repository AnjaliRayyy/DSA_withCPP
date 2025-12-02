#include <iostream>
using namespace std;
int main(){
    int num;
    printf("Enter the number : ");
    cin>>num;
    printf(num&1?"Odd":"Even");
    return 0;
}