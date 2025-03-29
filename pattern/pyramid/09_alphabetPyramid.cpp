/*
    Alphabet Pyramid : 
    For n=7,

                    A 
                  A B C
                A B C D E
              A B C D E F G
            A B C D E F G H I
          A B C D E F G H I J K
        A B C D E F G H I J K L M

*/
#include <iostream>
using namespace std;

int main() {
    int n;
    char ch;
    cout<<"Enter the value of n : ";
    cin>>n;

    for(int i=0;i<n;i++)
    {
        ch='A';
            for(int k=0;k<n-i-1;k++)
            cout<<"  ";
            for(int j=0;j<2*i+1;j++)
            cout<<ch++<<" ";
        cout<<endl;
    }
    return 0;
}