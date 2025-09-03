#include<iostream>
using namespace std;

int main() {
    char S[10] = "hello";
    char A[] = "hello";
    char B[] = {'h','e','l','l','o','\0','h','i'};
    char *C = "hello";
    
    cout<<S<<endl;
    cout<<A<<endl;
    cout<<B<<endl;
    cout<<C<<endl;
    return 0;
}