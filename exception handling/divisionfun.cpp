// function division.

#include<iostream>
using namespace std;

int division(int p, int q) {
    if(q == 0) 
        throw 404;
        return p/q;
}

int main() {
    int x=10, y=0, z;

    try
    {
        z = division(x,y);
        cout<<z<<endl;
    }
    catch(int e)
    {
       cout<<"Division not occur."<<e; 
    }
    
    return 0;
}