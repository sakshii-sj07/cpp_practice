// Count vowels, consonants, digits, and spaces in a string.

#include<iostream>
#include<string>
using namespace std;

int main() {
    string str;
    cout<<"Enter string : ";
    getline(cin, str);
    
    int vowels = 0;
    int consonants = 0;
    int digits = 0;
    int spaces = 0;

    for (int i = 0; i < str.length(); i++)
    {
        char ch = str[i];

        if(ch >= 'A' && ch <= 'Z' ) {
            ch = ch + 32;
        } else if (ch == 'a' || ch == 'e' || ch == 'i' || ch == 'o' || ch == 'u') {
            vowels++;
        } else if (ch >= 'a' && ch <= 'z') {
            consonants++;
        } else if (ch >= '0' && ch <= '9') {
            digits++;
        } else if (ch == ' ') {
            spaces++;
        }
    }
    
    cout<<"Voewls : "<<vowels<<endl;
    cout<<"Consonants : "<<consonants<<endl;
    cout<<"Digits : "<<digits<<endl;
    cout<<"Spaces : "<<spaces<<endl;
    return 0;
}