// Calculate area and perimeter of rectangle.

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
        return 2*(length + breadth);
    }
};

int main() {
    rectangle r1,r2;
    r1.length = 10;
    r1.breadth = 5;
    cout<<"The area of rectangle 1 : "<<r1.area()<<endl;
    cout<<"The perimeter of rectangle 1 : "<<r1.perimeter()<<endl;

    r2.length = 50;
    r2.breadth = 15;
    cout<<"The area of rectangle 2 : "<<r2.area()<<endl;
    cout<<"The perimeter of rectangle 2 : "<<r2.perimeter()<<endl;
    return 0;
}