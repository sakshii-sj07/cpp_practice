// calculate area and perimeter of rectangle using pointer to class.

#include<iostream>
using namespace std;

class rectangle {
    public : 
    int length;
    int breadth;

    int area() {
        return length*breadth;
    }

    int perimeter() {
        return 2*(length+breadth);
    }
};
int main() {

    // Pointer in stack.....
    rectangle r1;
    rectangle *p;
    p = &r1;
    p->length = 10;
    p->breadth = 5;
    cout<<"Area of r1 : "<<p->area()<<endl;
    cout<<"Perimeter of r1 : "<<p->perimeter()<<endl;

    rectangle r2;
    rectangle *q;
    q = &r1;
    q->length = 10;
    q->breadth = 5;
    cout<<"Area of r2 : "<<q->area()<<endl;
    cout<<"Perimeter of r2 : "<<q->perimeter()<<endl;

    // Pointer in heap....
    // rectangle *p = new rectangle();
    // p->length = 10;
    // p->breadth = 5;
    // cout<<"Area of p : "<<p->area()<<endl;
    // cout<<"Perimeter of p : "<<p->perimeter()<<endl;

    // rectangle *q = new rectangle();
    // q->length = 100;
    // q->breadth = 20;
    // cout<<"Area of q : "<<q->area()<<endl;
    // cout<<"Perimeter of q : "<<q->perimeter()<<endl;
    return 0;
}