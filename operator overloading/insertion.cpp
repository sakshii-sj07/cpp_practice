// write a code using insertion operator overloading.

#include<iostream>
using namespace std;

class complex {
    private :
        int real;
        int imag;
    public :
        complex(int r=0, int i=0) {
            real = r;
            imag = i;
        } 
        
        friend ostream & operator<<(ostream &o, complex &c);
};

ostream & operator<<(ostream &o,complex &c) {
    o<<c.real<<" + "<<c.imag<<"i";
    return o;
}
int main() {
    complex c(10,6);
    cout<<c;
    return 0;
}