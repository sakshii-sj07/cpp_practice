#include<iostream>
using namespace std;

int main() {
    int x = 10;
    const int *ptr = &x;

    int y=20;
    ptr = &y;

    // *ptr = 30;   // not modify;
    cout<<*ptr;
    return 0;
}