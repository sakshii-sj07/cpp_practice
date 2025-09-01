#include<iostream>
using namespace std;

typedef int marks;

int main() {
    marks m1,m2,m3;
    int total;
    float avg;
    cout<<"Enter 3 subject marks : ";
    cin>>m1>>m2>>m3;
    total = m1+m2+m3;
    avg = total/3.0;

    if(avg > 60) {
        cout<<"A"<<endl;
    } else if (avg >= 35 && avg <= 60) {
        cout<<"B"<<endl;
    } else {
        cout<<"C";
    }
    return 0;
}