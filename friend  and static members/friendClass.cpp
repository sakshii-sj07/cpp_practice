// class friend.

#include <iostream>
using namespace std;

class YourClass ;
class MyClass {
    private :
        string name;
    protected :
        int roll;
    public :
        int marks;

        friend YourClass;
};
class YourClass {
    public :
        MyClass m;

        void fun() {
            m.name = "sakshi";
            m.roll = 84;
            m.marks =8;

            cout<<m.name<<endl;
            cout<<m.roll<<endl;
            cout<<m.marks<<endl;
        }
};
int main() {
    YourClass y;
    y.fun();
    return 0;
}