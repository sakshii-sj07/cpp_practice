#include<iostream>
using namespace std;

int main() {
    int A[] = {2,4,6,8,10,12};
    int*p=A, *q=&A[5];

    p++;
    cout<<*p<<endl;
    p--;
    cout<<*p<<endl;
    p=p+2;
    cout<<*p<<endl;
    p=p-2;
    cout<<*p<<endl;

    
    cout<<q-p;

    return 0;
}