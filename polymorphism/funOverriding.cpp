// use overriding function.

#include<iostream>
using namespace std;

class Parent {
    public :
        void display() {
            cout<<"Display class parent."<<endl;
        }
};
class Child : public Parent {
    public :
        void display() {
            cout<<"Display class child.";
        }
};
int main() {
    Parent p;
    p.display();
    Child c;
    c.display();
    return 0;
}