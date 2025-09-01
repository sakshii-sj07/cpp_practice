#include<iostream>
using namespace std;

enum days {sun = 1, mon, tue, wed, thu, fri, sat};
enum depts {cse, it, civil, mech};

int main() {

    days day;
    depts dept;
    dept = it;

    cout<<dept;
    
    cout<<sun<<endl;
    cout<<mon<<endl;
    cout<<tue<<endl;
    cout<<wed<<endl;
    cout<<thu<<endl;
    cout<<fri<<endl;
    cout<<sat<<endl;
    
    
    return 0;
}