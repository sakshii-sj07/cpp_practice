// find greatest value from 3 values

#include<iostream>
using namespace std;

int max(int a, int b, int c) {
    if(a>b && a>c)
    return a;
    else if (b>c)
    return b;
    else return c;
}
int main() {
    int x=23, y= 45, z=11;
    cout<<max(x,y,z);
    return 0;
}