// Convert a string to lowercase without using built-in functions.

#include<iostream>
using namespace std;

int main() {
    string str;
    cout<<"Enter string : ";
    getline(cin,str);

    for (int i = 0; str[i] != '\0'; i++)
    {
        str[i] = str[i] + 32;
        cout<<str[i];
    }
    
}