#include<iostream>
using namespace std;

int main() {
    int n;
    float num[100];
    float sum=0.0;
    float avg;

    cout<<"Enter the number : ";
    cin>>n;

    for (int i = 0; i < n; i++)
    {
        cout<< i + 1 <<" . Enter number : ";
        cin>>num[i];
        sum = sum + num[i];
    }

    avg = sum / n;
    cout<<"Average is : "<<avg;
    
    return 0;
}