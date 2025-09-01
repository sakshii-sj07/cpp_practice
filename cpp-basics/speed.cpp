#include <iostream>
#include <cmath>
using namespace std;

int main() {
    int u ,v ,a;
    float speed;
    cout<<"Enter u , v , a : ";
    cin>>u>>v>>a;
    speed = (u*u - v*v) / (2*a);
    cout<<"The speed is : "<<speed<<endl;
    return 0;
}