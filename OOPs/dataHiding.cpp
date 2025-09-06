// calculate area of rectangle with keeping data is private.

#include<iostream>
using namespace std;

class rectangle {
    private :
    int length;
    int breadth;

    public : 
    void setLength(int l) {
        if(l > 0) {
           length = l;
        } else {
           cout<<"Negative measurements are not allow."<<endl;
           length = 0;
        }   
    }
    void setBreadth(int b) {
        if(b > 0) {
            breadth = b;
        } else {
            cout<<"Negative measurements are not allow."<<endl;
            breadth = 0;  
        }  
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
        return 2*(length+breadth);
    }
};

int main() {
    rectangle r;

    r.setLength(10);
    r.setBreadth(-5);
    cout<<"Area : "<<r.area()<<endl;
    cout<<"Perimeter : "<<r.perimeter()<<endl;
   
    return 0;
}
