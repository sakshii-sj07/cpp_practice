//sum of two numbers using function to pointer

#include<iostream>
using namespace std;

int add(int a, int b) {
    return a+b;
}
int main() {
    int (*fp)(int, int) ;
    fp = add;
    cout<<fp(10,5);
    return 0;
}