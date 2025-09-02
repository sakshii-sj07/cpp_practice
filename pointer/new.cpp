#include<iostream>
using namespace std;

int main() {
    int size;
    cout<<"Enter the size of elements : ";
    cin>>size;

    int *p = new int[size];
    cout<<"Memory allocation is : "<<size *sizeof(int)<<endl;
    delete []p ;

    p = new int[size];
    cout<<"Enter new size : ";
    cin>>size;

    cout<<"Memory allocation is : "<<size *sizeof(int)<<endl;
    return 0;
}