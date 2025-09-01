#include<iostream>
using namespace std;

int main() {
    int n;
    cout<<"Enter number : ";
    cin>>n;
    if (n % 2 != 0)
    {
        cout<<"odd";
    } else {
        cout<<"even";
    }
    
    return 0;
}