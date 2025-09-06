// write code for friend function overloading.

#include<iostream>
using namespace std;

class complex {
    private:
        int real;
        int imag;
    public:
        complex (int r=0, int i=0) {
            real = r;
            imag = i;
        }   
        void setData(int r, int i) {
            real = r;
            imag = i;
        }
        void display() {
            cout<<real<<" + "<<imag<<"i";
        }
        friend complex operator+(complex c1,complex c2);
};

complex operator+(complex c1,complex c2) {
    complex temp;
    temp.real = c1.real + c2.real;
    temp.imag = c1.imag + c2.imag;
    return temp;
}

int main() {
    complex c1,c2,c3;
    c1.setData(3,8);
    c2.setData(2,6);
    c3 = c1 + c2;
    cout<<"Result : ";
    c3.display();
    return 0;
}