#include <iostream>
using namespace std;

int main() {
    int *p = new int[5];
    p[0]=10;
    p[1]=11;
    cout<<p[0];

    delete []p;
    p = nullptr;

    
    return 0;
}