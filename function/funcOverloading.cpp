//sum of overloading func

#include<iostream>
using namespace std;

int sum(int a, int b) {
    return a+b;
}

int sum(int a, int b, int c) {
    return a+b+c;
}

float sum(float a, float b) {
    return a+b;
}
int main() {
    int x=10 ,y=5, z=15;
    float m=18.0f , n=9.0f;
    cout<<sum(x,y)<<endl;
    cout<<sum(x,y,z)<<endl;
    cout<<sum(m,n);
    return 0;
}