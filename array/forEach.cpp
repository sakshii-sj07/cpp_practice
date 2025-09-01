#include<iostream>
using namespace std;

int main() {
    char C[] = {'A' , 97 , 98 , 99 , 'B'};
    for(auto x : C) {
        cout<<x<<endl;
    }
    return 0;
}