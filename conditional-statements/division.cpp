#include<iostream>
using namespace std;

int main() {
    int a,b,c;
    cout<<"Enter two numbers : ";
    cin>>a>>b;
    if (b == 0)
    {
        cout<<"Invalid number";
    } else {
        c = a/b;
        cout<<"The answer is : "<<c;
    }
    
    return 0;
}