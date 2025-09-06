// write code using scope resolution operators

#include<iostream>
using namespace std;

class rectangle {
    private : 
        int length;
        int breadth;
    
    public :
        rectangle (int l , int b);
        void setLength(int l);
        void setBreadth(int b);
        int getLength();
        int getBreadth();
        int area();
        int perimeter();  
        bool isSquare();
        ~rectangle();  
};

int main() {
    rectangle r(10,5);
    
    cout<<"Length : "<<r.getLength()<<endl;
    cout<<"Breadth : "<<r.getBreadth()<<endl;
    cout<<"Area : "<<r.area()<<endl;
    cout<<"Perimeter : "<<r.perimeter()<<endl;
    if (r.isSquare())
    {
        cout<<"yes"<<endl;
    }
    
    return 0;
}

// constructor
rectangle::rectangle(int l , int b) {
    setLength(l);
    setBreadth(b);
}

// setter 
void rectangle::setLength(int l) {
    if(l > 0) {
        length = l;
    } else {
        cout<<"Length must be positive.";
        length = abs(l);
    }
}
void rectangle::setBreadth(int b) {
    if(b > 0) {
        breadth = b;
    } else {
        cout<<"Breadth must be positive.";
        breadth = abs(b);
    } 
}

// getter
int rectangle::getLength() {
    return length;
}
int rectangle::getBreadth() {
    return breadth;
}


// area & perimeter
int rectangle::area() {
    return length*breadth;
}
int rectangle::perimeter() {
    return 2*(length+breadth);
}

// enquiry
bool rectangle::isSquare() {
    return length == breadth;
}

// destructor
rectangle::~rectangle() {
    cout<<"Rectangle destroyed.";
}