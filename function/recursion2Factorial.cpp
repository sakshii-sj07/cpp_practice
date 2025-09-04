//factorial of natural numbers

#include<iostream>
using namespace std;

int fact(int n) {
    if(n == 0) {
        return 0;
    } else if (n == 1) {
        return 1;
    } else {
        return n * fact(n-1);
    }
}
int main() {
    int a=11;
    cout<<fact(a);
    return 0;
}