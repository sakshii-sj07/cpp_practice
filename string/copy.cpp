#include<iostream>
#include<string>
using namespace std;

int main() {
    string s = "Programming";
    char str[20];
    s.copy(str,4);
    str[4] = '\0';
    cout<<str;
    return 0;
}