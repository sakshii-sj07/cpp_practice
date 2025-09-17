// Check if two strings are anagrams

#include<iostream>
using namespace std;

int main() {
    string str1,str2;
    cout<<"Enter two strings : ";
    cin>>str1>>str2;

    if(str1.length() != str2.length()) {
        cout<<"not anagram.";
        return 0;
    }

    int freq1[256] = {0};
    int freq2[256] = {0};

    for (int i = 0; i < str1.length(); i++)
    {
        freq1[(int)str1[i]]++;
    }

    for (int i = 0; i < str2.length(); i++)
    {
        freq2[(int)str2[i]]++;
    }
    
    for (int i = 0; i < 256; i++)
    {
        if (freq1[i] != freq2[i])
        {
            cout<<"Not anagram.";
        } 
    }
    cout<<"Anagram";
    
    return 0;
}