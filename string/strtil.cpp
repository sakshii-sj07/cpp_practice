#include<iostream>
#include<cstring>
using namespace std;

int main() {
    char s1[] ="2006";

    long int x= strtol(s1, NULL,10);

    cout<<x<<endl;
    cout<<x+20<<endl;
    return 0;
}