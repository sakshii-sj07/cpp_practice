// Access and print each character of a string using a loop.

#include<iostream>
using namespace std;

int main() {
    string str;
    cout<<"Enter string : ";
    cin>>str;

    for (int i = 0; str[i] != '\0'; i++)
    {
        cout<<i<<" : "<<str[i]<<endl;
    }
    
    return 0;
}