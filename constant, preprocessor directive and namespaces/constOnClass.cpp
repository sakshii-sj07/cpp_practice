#include<iostream>
using namespace std;

class Demo {
    public:
        int a = 10;
        int b = 20;

        void display() const {
            // a++;   //not allow.
            cout<<a<<" "<<b;
        }
};
int main() {
    Demo d;
    d.display();
    return 0;
}