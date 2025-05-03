#include <iostream>
using namespace std;

int main() {
    char str[100];
    cout<<"Enter the string : ";
    // cin>>str;                    //one word strings only without spaces

    cin.getline(str,100,'$');       
    // multi word strings 
    // Syntax : cin.getline(string,length,delimiter)

    for(int i=0;str[i]!='\0';i++)
    cout<<str[i];
    return 0;
}