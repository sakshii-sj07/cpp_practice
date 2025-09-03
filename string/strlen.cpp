#include<iostream>
#include<string.h>
using namespace std;

int main() {
    char s1[100];
    cout<<"Enter a string : ";
    cin.getline(s1,100);

    cout<<strlen(s1)<<endl;
    cout<<s1;
    return 0;
}