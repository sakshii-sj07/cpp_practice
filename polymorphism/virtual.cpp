// virtual function.

#include<iostream>
using namespace std;

class Base {
    public :
        virtual void show() {
            cout<<"Base function."<<endl;
        }
};
class Derived  : public Base {
    public :
        void show() {
            cout<<"Derived function.";
        }
};
int main() {
    Derived d;
    Base *b = &d;
    b->show();
    return 0;
}