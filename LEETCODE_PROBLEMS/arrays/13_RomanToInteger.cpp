#include <iostream>
using namespace std;
int charToInt(char ch)
{
    switch(ch)
    {
        case 'I':return 1;
        case 'V':return 5;
        case 'X':return 10;
        case 'L':return 50;
        case 'C':return 100;
        case 'D':return 500;
        case 'M':return 1000;
    }
}
int main() {
    string s="MCMXCIV";
    int num=0;
    
    for(int i=0;i<s.length();i++)
    {
        if(i+1<s.length() && charToInt(s[i])<charToInt(s[i+1]))
        num-=charToInt(s[i]);
        else
        num+=charToInt(s[i]);
    }
    cout<<num;
    return 0;
}