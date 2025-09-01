#include<iostream>
#include<math.h>
using namespace std;

int main() {
    float a,b,c,d,r1,r2;
    cout<<"Enter three numbers : "<<endl;
    cin>>a>>b>>c;

    d = b*b - 4*a*c;
    
    if(d == 0) {
        r1= -b/(2*a);
        cout<<"Roots are real and equal"<<r1<<endl;
    } else if (d > 0) {
        r1= (-b+sqrt(d)) /(2*a);
        r2= (-b+sqrt(d)) /(2*a);
        cout<<"Roots are real and unequal"<<r1<<" "<<r2<<endl;
    } else {
        cout<<"Roots are imaginary";
    }
    return 0;
}