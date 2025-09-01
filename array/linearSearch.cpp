#include<iostream>
using namespace std;

int main() {
    int A[] = {12,23,34,45,56,67,78,89,98,76,64};

    int key;
    cout<<"Enter key : ";
    cin>>key;

    for (int i = 0; i < 10; i++)
    {
        if(key==A[i]) {
            cout<<"Key is found at "<<i;
            return 0;
        }
    }
    cout<<"key is not found";
    
    return 0;
}