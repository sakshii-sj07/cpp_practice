//function for change value

#include<iostream>
using namespace std;

int changeValue(int *a) {
    *a=100;
    cout<<*a<<endl;
    return *a;
}
int main() {
    int x=10;
    changeValue(&x);
    cout<<x;
    return 0;
}