#include<iostream>
#include<string>
using namespace std;

int main() {
    char s[] = "7.32006";

    float y= strtof(s,NULL);

    cout<<y<<endl;
    cout<<y*2<<endl;
    return 0;
}