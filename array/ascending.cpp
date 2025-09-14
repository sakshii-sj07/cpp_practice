//sort the array in ascending order

#include<iostream>
using namespace std;

int main() {
    int n;
    cout<<"Enter elements in array : ";
    cin>>n;

    int arr[n];

    cout<<"Enter "<<n<<" numbers : ";
    for (int i = 0; i < n; i++)
    {
        cin>>arr[i];
    }

    int temp;
    for (int i = 0; i < n-1; i++)
    {
        for (int j = i+1; j < n; j++)
        {
            if(arr[i] > arr[j]) {
            temp = arr[i];
            arr[i] = arr[j];
            arr[j] = temp;
            }
        }
        
    }

    cout<<"Sorted array : ";
    for (int i = 0; i < n; i++)
    {
        cout<<arr[i]<<" ";
    }
    
    
    
    return 0;
}