#include<iostream>
using namespace std;

int main() {
    int x =10;
    int * const ptr = &x;

    *ptr = 20;  // this is allow

    int y =50;
    // ptr = &y;  // not allow beacause now pointer is constant.

    cout<<*ptr;
    return 0;
}