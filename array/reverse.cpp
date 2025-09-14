//reverse a given array.

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

    int start = 0;
    int end = n - 1;

    while (start < end)
    {
        int temp = arr[start];
        arr[start] = arr[end];
        arr[end] = temp;

        start++;
        end--;
    }

    cout<<"Reversed Array "<<endl;
    for (int i = 0; i < n; i++)
    {
        cout<<arr[i]<<" ";
    }
    
    
    return 0;
}