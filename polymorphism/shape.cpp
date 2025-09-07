/* write a classe to demostrate polymorphism.
base class is shape.
derived classes
1. rectangle
2.circle  */

#include<iostream>
using namespace std;

class Shape {
    public :
        virtual float area() = 0;
        virtual float perimeter() = 0;
};

class Rectangle {
    private :
        float length;
        float breadth;

    public :
        Rectangle () {
            length = 0;
            breadth = 0;
        }    
        Rectangle (float l, float b) {
            length =l;
            breadth =b;
        }
        void setLength(float l) {length =l;}
        void setBreadth(float b) {breadth =b;}
        float getLength() {return length;}
        float getBreadth() {return breadth;}
        float area() {return length*breadth;}
        float perimeter() {return 2*(length + breadth);}
};

class Circle {
    private :
        float radius;

    public :
        Circle() {
            radius =0;
        }    
        Circle(float r) {
            radius = r;
        }
        void setRadius(float r) {radius = r;}
        float getRadius() {return radius;}
        float area() {return 3.14*radius*radius;}
        float peimeter() {2*3.14*radius;}
};
int main() {
    Shape *s;

    Rectangle r;
    r.setLength(23);
    r.setBreadth(21);
    cout<<"length : "<<r.getLength()<<" "<<"Breadth : "<<r.getBreadth()<<endl;
    cout<<"Area is : "<<r.area()<<endl;
    cout<<"Perimeter is : "<<r.perimeter()<<endl;

    cout<<endl;

    Circle c;
    c.setRadius(45.3);
    cout<<"Radius : "<<c.getRadius()<<endl;
    cout<<"Area is : "<<c.area()<<endl;
    cout<<"Perimeter is : "<<c.peimeter()<<endl;
    return 0;
}