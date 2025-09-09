#include<iostream>
using namespace std;

int main() {
    int x =10;
    const int * const ptr = &x;

    // *ptr = 20;  // this is also not allow here because int is constant now.

    int y =50;
    // ptr = &y;  // not allow beacause now pointer is constant.

    cout<<*ptr;
    return 0;
}