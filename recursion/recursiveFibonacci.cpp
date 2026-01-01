#include <iostream>
using namespace std;
int FiboSum(int n){
    if (n==0) return 0;
    return Fibo(n)+FiboSum(n-1);
}
int Fibo(int n){
    if ( n==1 || n==0)  return n;
    return Fibo(n-1)+Fibo(n-2);
}
int main() {
    int n;
    cout<<"Enter the value of n: ";
    cin>>n;
    cout<<"The sum of first "<<n<<" Fibonacci numbers is: "<<FiboSum(n)<<endl;
    return 0;
}