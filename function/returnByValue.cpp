//return a function by value

#include<iostream>
using namespace std;

int square(int n) {
    return n*n;
}

int main() {
    int a=10;
    int result = square(a);
    cout<<result;
}