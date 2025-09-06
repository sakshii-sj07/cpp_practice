// code for sum of complex number

#include<iostream>
using namespace std;

class complexNumber {
    private:
        int real;
        int imag;
    public:
        complexNumber(int r=0, int i=0) {
            real = r;
            imag = i;
        }    
        complexNumber operator+(complexNumber c) {
            complexNumber temp;
            temp.real = real+c.real;
            temp.imag = imag+c.imag;
            return temp;
        }
        void setData(int r, int i) {
            real = r;
            imag = i;
        }
        void getData() {
            cout<<real<<" + "<<imag<<"i";
        }
};

int main() {
    complexNumber c1,c2,c3;
    c1.setData(3,7);
    c2.setData(5,2);
    c3 = c1 + c2;
    cout<<"Result : ";
    c3.getData();
}