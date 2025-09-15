// Reverse a string.

#include<iostream>
#include<string>
using namespace std;

int main() {
    string str;
    cout<<"Enter string : ";
    getline(cin,str);

    int n = str.length();

    for (int i = 0; i < n/2; i++)
    {
        swap(str[i] , str[n - i - 1]);
    }

    cout<<"Revrsed string : "<< str;
    
    return 0;
}