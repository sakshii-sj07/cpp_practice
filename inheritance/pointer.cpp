// base class pointer and derived class object.

#include<iostream>
using namespace std;

class Rectangle {
    public :
        void area() {
            cout<<"Rectangle has area.";
        }
};
class Cuboid : public Rectangle{
    public :
        void volume() {
            cout<<"Cuboid has volume.";
        }
};
int main() {
    Rectangle *r;
    r = new Cuboid();
    r->area();
   // r->volume();  --cannot accecible.
    return 0;
}