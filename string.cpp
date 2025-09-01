#include<iostream>
using namespace std;

int main() {
    string name;
    cout<<"What is your name : ";
    // cin>>name;
    getline(cin , name);
    cout<<"Welcome "<<name;
    return 0;
}