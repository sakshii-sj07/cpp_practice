// exception handling on division.

#include<iostream>
using namespace std;

int main() {
    int x=10, y=0, z;

    try
    {
        if(y == 0) 
             throw 404;
           z = x/y; 
           cout<<z<<endl; 
    }
    catch(int e)
    {
        cout<<"Division not occur."<<e;
    }
    
    return 0;
}