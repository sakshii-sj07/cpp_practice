//function on default argument 

#include<iostream>
using namespace std;

int sum(int a, int b, int c=0) {
    return a+b+c;
}
int main() {
    int c= sum(12,4,5);
    int d= sum(9,6);
    int f= sum(2,4,0);

    cout<<c<<endl;
    cout<<d<<endl;
    cout<<f<<endl;
    return 0;
}