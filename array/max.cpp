// find the maximum element in the array.

#include<iostream>
using namespace std;

int main() {
    int n;
    cout<<"Enter number : ";
    cin>>n;

    int arr[n];

    cout<<"Enter " <<n<< " numbers : ";
    for (int i = 0; i < n; i++)
    {
        cin>>arr[i];
    }

    int max = arr[0];
    for (int i = 0; i < n; i++)
    {
        if(arr[i] > max)
        max = arr[i];
    }
    cout<<"The maximum number is "<<max;
    
    
    
    return 0;
}