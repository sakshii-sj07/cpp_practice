//find length of string

#include<iostream>
#include<string>
using namespace std;

int main() {
    string name = "sakshi";
    string::iterator it;
    int count=0;
    for ( it = name.begin(); it != name.end(); it++)
    {
       count++;
    
    }
    cout<<"length is "<<count;
    
    return 0;
}