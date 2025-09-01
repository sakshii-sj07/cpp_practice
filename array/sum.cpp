#include<iostream>
using namespace std;

int main() {
    int A[] = {12,23,34,45,56,67,78,89,90};
    int n, sum=0;
    cout<<"Enter number : ";
    cin>>n;
    for (int i = 0; i < n; i++)
    {
        sum = sum + A[i];
    }
    cout<<"sum is "<<sum;
    
    return 0;
}