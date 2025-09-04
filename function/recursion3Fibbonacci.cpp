//fibbonacci series

#include<iostream>
using namespace std;

int fibbonacci(int n) {
    if(n == 0) {
        return 0;
    } else if (n == 1) {
        return 1;
    } else {
        return fibbonacci(n-1) + fibbonacci(n-2);
    }
}
int main() {
    int a=20;
    cout<<"Fifth fibonacci series : " <<fibbonacci(5);
    return 0;
}