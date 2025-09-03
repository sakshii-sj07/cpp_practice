#include<iostream>
#include<cstring>
using namespace std;

int main() {
    char s1[] = "Programming";
    char s2[] = "m";

    if(strstr(s1,s2) != NULL)
    cout<<strstr(s1,s2)<<endl;
    else
    cout<<"Not found";
    return 0;
}