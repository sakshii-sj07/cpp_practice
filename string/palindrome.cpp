// Check whether a string is a palindrome.

#include <iostream>
#include<string>
using namespace std;

int main() {
    string str;
    cout<<"Enter string : ";
    getline(cin,str);

    int start = 0;
    int end = str.length() - 1;
    string original = str;

    while (start < end)
    {
        int temp = str[start];
        str[start] = str[end];
        str[end] = temp;
        start++;
        end--;
    }

    if(str == original) {
        cout<<"Palindrome.";
    } else {
        cout<<"Not palindrome.";
    }
    
    return 0;
}