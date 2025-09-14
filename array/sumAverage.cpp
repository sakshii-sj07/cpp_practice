// Find sum & average of elements in an array.

#include<iostream>
using namespace std;

int main() {
    int n;
    cout<<"Enter elements in array : ";
    cin>>n;

    int arr[n];

    cout<<"Enter "<<n<<" elements : ";
    for (int i = 0; i < n; i++)
    {
        cin>>arr[i];
    }

    int sum = 0;
    int avg;

    for (int i = 0; i < n; i++)
    {
        sum = sum + arr[i];
        avg = sum/n;
    }
    cout<<"Sum is "<<sum<<endl;
    cout<<"Average is "<<avg<<endl;
    
    return 0;
}