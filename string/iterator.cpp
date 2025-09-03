#include<iostream>
#include<string>
using namespace std;

int main() {
    string s = "today";
    string::iterator it;
    for (it = s.begin(); it != s.end(); it++)
    {
        *it = *it-32;
    }
    cout<<s;
    
    return 0;
}