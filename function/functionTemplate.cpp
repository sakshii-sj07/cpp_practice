//Write a function for same logic in two different data type

#include<iostream>
using namespace std;

template<class T>

T maximum(T x, T y) {
    return (x>y)?x : y;
}

int main() {
    int c = maximum(10,5);
    float d = maximum(10.4f, 3.4f);

    cout<<c<<endl;
    cout<<d<<endl;
    
    return 0;
}