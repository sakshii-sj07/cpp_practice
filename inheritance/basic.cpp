// print values of x and y using inheritance.

#include<iostream>
using namespace std;

class base {
    public :
        int x;
        void show() {
            cout<<x<<endl;
        }
};
class derived : public base {
    public :
        int y;
        void display() {
            cout<<x<<" "<<y<<endl;
        }
};
int main() {
    base b;
    b.x = 10;
    b.show();

    cout<<endl;
    
    derived d;
    d.x = 45;
    d.y = 90;
    d.display();

    return 0;
}