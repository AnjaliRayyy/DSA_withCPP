#include <iostream>
using namespace std;
void reverse_str(string &s)
{
    int start=0,end=s.length()-1;
    while(start<end)
    {
        // swap(s[start],s[end]);
        char temp=s[start];
        s[start]=s[end];
        s[end]=temp;
        start++;
        end--;
    }
}

int main() {
    string s;
    cout<<"Enter the string : ";
    getline(cin,s);

    reverse_str(s);
    cout<<"Reverse string is : "<<s;
    return 0;
}