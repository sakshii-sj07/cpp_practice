#include<iostream>
using namespace std;

class Test {
    int *ptr;
    public:
        Test() {
            ptr = new int [10];
            cout<<"Constructor is called."<<endl;
        }
        ~Test() {
            delete []ptr;
            cout<<"Distructor is called."<<endl;
        }
};

void fun() {
  
    Test *ptr = new Test();
    delete ptr;
}
int main() {
    fun();
    return 0;
}