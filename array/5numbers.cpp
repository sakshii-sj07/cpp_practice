//take five numbers in an array and print them

#include<iostream>
using namespace std;

int main() {
    int arr[5];

    cout<<"Enter numbers : ";
    for (int i = 0; i < 5; i++)
    {
        cin>>arr[i];
    }

    cout<<"You entered : ";
    for (int  i = 0; i < 5; i++)
    {
        cout<<arr[i] <<" ";
    }
    
    
    
    return 0;
}