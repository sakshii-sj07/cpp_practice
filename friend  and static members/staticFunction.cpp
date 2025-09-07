// static function.

#include<iostream>
using namespace std;

class Test {
    private:
        int a;
    public:
        int b;
        static int count;
        
        Test() {
            b=45;
            count++;
        }

        static int getCount() {
            return count;
        }
};

int  Test::count = 0;
int main() {
    Test t1,t2;
    cout<<Test::getCount()<<endl;
    return 0;
}