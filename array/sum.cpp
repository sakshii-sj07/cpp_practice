//find the sum of all elements in array

#include<iostream>
using namespace std;

int main() {
    int n;
    cout<<"Enter number : ";
    cin>>n;

    int arr[n];
    int sum=0;

    cout<<"Enter "<<n<<" numbers : ";
    for (int i = 0; i < n; i++)
    {
        cin>>arr[i];
        sum = sum+arr[i];
    }

    cout<<"The sum is "<<sum;
   
    return 0;
}