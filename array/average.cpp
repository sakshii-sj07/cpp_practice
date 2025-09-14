// find the average of elements in array

#include<iostream>
using namespace std;

int main() {
    int n;
    cout<<"Enter number : ";
    cin>>n;

    float arr[n];
    float sum = 0;
    float avg;

    cout<<"Enter "<<n<<" numbers : ";
    for (int i = 0; i < n; i++)
    {
        cin>>arr[i];
        sum = sum + arr[i];
        avg = sum/n;
    }
    cout<<"Average is "<<avg;
    
    return 0;
}