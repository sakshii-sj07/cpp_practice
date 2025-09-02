#include<iostream>
using namespace std;

int main() {
    int x=10;
    int &ref=x;

    ref=ref+x;

    cout<<x<<endl;
    cout<<ref<<endl;
    cout<<&x<<" "<<&ref;
    return 0;
}