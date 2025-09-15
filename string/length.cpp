// Find the length of a string (without using length() function).

#include<iostream>
using namespace std;

int main() {
    string name;
    cout<<"Enter name : ";
    cin>>name;

    int count = 0;

    while (name[count] > 0)
    {
        count++;
    }
    cout<<count;
    
    return 0;
}