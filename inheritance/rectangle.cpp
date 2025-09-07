// create class for rectangle and cuboid using inheritance.

#include<iostream>
using namespace std;

class Rectangle {
    private :
        int length;
        int breadth;

    public :
        Rectangle() {
            length = 0;
            breadth = 0;
        }
        Rectangle(int l , int b) {
            setLength(l);
            setBreadth(b);
        }
        void setLength(int l) {
            length = l;
        }
        void setBreadth(int b) {
            breadth = b;
        }
        int getLength() {
            return length;
        }
        int getBreadth() {
            return breadth;
        }
        int area() {
            return length*breadth;
        }
        int perimeter() {
            return 2*(length + breadth);
        }
};

class Cuboid : public Rectangle {
    private : 
        int height;

    public :
        Cuboid() {
            setLength(0);
            setBreadth(0);
            height = 0;
        }
        Cuboid(int l ,int b, int h) {
            setLength(l);
            setBreadth(b);
            height = h;
        }
        void setHeight(int h) {
            height = h;
        }
        int getHeight() {
            return height;
        }
        int volume() {
            return getLength() * getBreadth() * height; 
        }
};
int main() {
    Rectangle r;
    r.setLength(10);
    r.setBreadth(45);
    cout<<"Area of rectangle : "<<r.area()<<endl;
    cout<<"Perimeter of rectangle : "<<r.perimeter()<<endl;

    cout<<endl;

    Cuboid c;
    c.setLength(23);
    c.setBreadth(9);
    c.setHeight(12);
    cout<<"Area of cuboid : "<<c.area()<<endl;
    cout<<"Perimeter of cuboid : "<<c.perimeter()<<endl;
    cout<<"Volume of cuboid : "<<c.volume()<<endl;
    return 0;
}