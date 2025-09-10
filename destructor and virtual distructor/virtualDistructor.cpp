#include<iostream>
using namespace std;

class Base {
    public :
        Base() {
            cout<<"Base constructor called."<<endl;
        }
        virtual ~Base() {
            cout<<"Base destructor is called."<<endl;
        }
};

class Derived : public Base {
    public:
        Derived() {
            cout<<"Derived constructor called."<<endl;
        }
        ~Derived() {
            cout<<"Derived destructor is called."<<endl;
        }
};
int main() {
    Base * ptr = new Derived();
    delete ptr;
    return 0;
}