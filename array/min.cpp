//find minimum element in array.

#include<iostream>
using namespace std;

int main() {
    int n;
    cout<<"Enter number : ";
    cin>>n;

    int arr[n];

    cout<<"Enter " <<n<< " numbers : ";
    for (int i = 0; i < n ; i++)
    {
        cin>>arr[i];
    }

    int min = arr[0];

    for (int i = 0; i < n ; i++)
    {
        if(min < arr[0])
        min = arr[i];
    }

    cout<<"The minimum number is "<<min;
    
    return 0;
}