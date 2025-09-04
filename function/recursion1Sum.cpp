//sum of natural numbers

#include<iostream>
using namespace std;

int sum(int n) {
    if(n == 0) {
        return 0;
    } else {
        return n + sum(n-1);
    }
}
int main() {
    int a=10;
    cout<<sum(a);
    return 0;
}