//count even and odd numbers in an array

#include<iostream>
using namespace std;

int main() {
    int n;
    cout<<"Enter number :";
    cin>>n;

    int arr[n];

    cout<<"Enter "<<n<<" numbers : ";
    for (int i = 0; i < n; i++)
    {
        cin>>arr[i];
    }

    int evenCount=0;
    int oddCount=0;

    for (int i = 0; i < n; i++)
    {
        if(arr[i] % 2 == 0)
        evenCount++;
        else
        oddCount++;
    }
    cout<<"The even numbers are "<<evenCount<< " and odd numbers are "<<oddCount;
    
    return 0;
}