//find the element using linear search.

#include<iostream>
using namespace std;

int main() {
    int n;
    cout<<"Enter length of array : ";
    cin>>n;

    int arr[n];

    cout<<"Enter "<<n<<" numbers : ";
    for (int i = 0; i < n; i++)
    {
        cin>>arr[i];
    }

    int key;
    cout<<"Enter the element to search for : ";
    cin>>key;

    for (int i = 0; i < n; i++)
    {
        if(arr[i] == key) {
            cout<<"The element is found at : "<<i<<" position";
            return 0;
        }
    }
    cout<<"Not found";
    
    return 0;
}