// write a code using constructor.

#include<iostream>
using namespace std;

class rectangle {
    private :
    int length;
    int breadth;
    
    public:
    // non parameterized constructor
    rectangle() {
        length = 0;
        breadth = 0;
    }

    // parameterized constructor
    rectangle(int l,int b) {
        setLength(l);
        setBreadth(b);
    }

    // copy constructor
    rectangle(rectangle(&r)) {
        length = r.length;
        breadth = r.breadth;
    }

    
    void setLength(int l) {
        if(l > 0) {
            length = l;
        } else {
            cout<<"Negative values are not allow.";
            length = 0;
        }
    }
    void setBreadth(int b) {
        if(b > 0) {
            breadth = b;
        } else {
            cout<<"Negative values are not allow.";
            breadth = 0;
        }
    }


    int area() {
        return length*breadth;
    }
};

int main() {
    // non parameterized constructor
    rectangle r1;
    cout<<"Area is : "<<r1.area()<<endl;

    // parameterized constructor
    rectangle r2(10,5);
    cout<<"Area is : "<<r2.area()<<endl;

    // copy constructir
    rectangle r3(r2);
    cout<<"Area is : "<<r3.area()<<endl;
}