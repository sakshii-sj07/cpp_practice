//chage case to upper case

#include<iostream>
#include<string>
using namespace std;

int main() {
    string text = "WelCOmE5";
    string::iterator it;
    for ( it = text.begin(); it != text.end(); it++)
    {
        if(*it>=97 && *it<=122) {
            *it = *it - 32;
        }
    }
    cout<<text;
    
    return 0;
}