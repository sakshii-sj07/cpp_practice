//return by address.

#include<iostream>
using namespace std;

int *getAddress(int &n) {
    return &n;
}
int main() {
    int x=10;
    int *p=getAddress(x);
    *p=100;
    cout<<x;
}