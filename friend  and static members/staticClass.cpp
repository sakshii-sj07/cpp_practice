// static class.

#include<iostream>
using namespace std;

class Test {
    private :
        int a;
    public :

        static int count;
        
        Test() {
            count++;
        }
};

int Test::count = 0;

int main() {
    Test t1, t2;
    cout<<t1.count<<endl;
    cout<<t2.count<<endl;
    cout<<Test::count<<endl;

    t1.count = 23;
    cout<<t1.count<<endl;
    cout<<t2.count<<endl;
    cout<<Test::count<<endl;

    return 0;
}