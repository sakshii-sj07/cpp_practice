//create a function for adding two numbers.

#include<iostream>
using namespace std;

int sum(int a, int b) {
    int c;
    c = a+b;
    return c;
}

int main() {
    int x=10 , y=20 , z;
    z = sum(x,y);
    cout<<z;
    return 0;
}