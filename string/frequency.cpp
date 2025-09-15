// Count the frequency of each character in a string.

#include<iostream>
#include<string>
using namespace std;

int main() {
    string str;
    cout<<"Enter string : ";
    cin>>str;

    int freq[256] = {0};

    for (int i = 0; str[i] != '\0'; i++)
    {
        freq[(unsigned char)str[i]]++;
    }
    
    for (int i = 0; i < 256; i++)
    {
        if(freq[i] > 0)
        cout<<(char)i<<" : "<<freq[i]<<endl;
    }
    
    return 0;
}