//return by reference

#include<iostream>
using namespace std;

int &getRef(int &n) {
    return n;
}
int main() {
    int x=10;
    getRef(x)=50;
    cout<<x;

}