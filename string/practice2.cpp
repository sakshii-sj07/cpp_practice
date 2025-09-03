//convert upper case to lower case

#include<iostream>
#include<string>
using namespace std;

int main() {
    string text = "WELCOME";
    string::iterator it;

    for ( it = text.begin(); it != text.end(); it++)
    {
       *it = *it + 32;
    }
    cout<<text;
    
    return 0;
}