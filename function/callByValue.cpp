//function for change value.

#include<iostream>
using namespace std;

int changeValue(int x) {
    x=100;
    return x;
}
int main() {
    int a=10;
    changeValue(a);
    cout<<a;
    return 0;
}