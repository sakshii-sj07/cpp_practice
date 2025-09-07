// use constructor.

#include<iostream>
using namespace std;

class Base {
    public :
        Base() {cout<<"Non param base.";}
        Base(int x) {cout<<"param of base.";}
};
class Derived : public Base {
    public:
        Derived() {
            cout<<"non param derived";
        }
        Derived(int y) {
            cout<<"param of derived";
        }
        Derived(int x, int y) : Base(x) {
            cout<<"param of derived";
        }
};
int main() {
    Derived d(5,10);
    return 0;
}