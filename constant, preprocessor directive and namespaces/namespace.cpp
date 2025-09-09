#include<iostream>
using namespace std;

namespace first {
    void fun() {
        cout<<"First fun."<<endl;
    }
}

namespace secound {
    void fun() {
        cout<<"Secound fun."<<endl;
    }
}

using namespace first;
int main() {

    fun();
    secound::fun();

    return 0;
}
