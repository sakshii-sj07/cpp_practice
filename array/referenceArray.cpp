#include<iostream>
using namespace std;

int main() {
    int A[] = {23,34,45,566,77};
    for(auto &x : A) {
        cout<<++x<<endl;
    }
    return 0;
}