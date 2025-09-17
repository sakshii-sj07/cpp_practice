// Find the second largest element in an array.

#include<iostream>
#include<limits.h>
using namespace std;

int main() {
    int n;
    cout<<"Enter number of elements in array : ";
    cin>>n;

    int arr[n];

    cout<<"Enter "<<n<<" elements : ";
    for (int i = 0; i < n; i++)
    {
        cin>>arr[i];
    }
    
    int largest = INT32_MIN;
    int secoundLargest = INT32_MIN;

    for (int i = 0; i < n; i++)
    {
        if(arr[i] > largest) {
            secoundLargest = largest;
            largest = arr[i];
        } else if (arr[i] > secoundLargest && arr[i] != largest) {
            arr[i] = secoundLargest;
        }
    }

    if(secoundLargest == INT32_MIN) {
        cout<<"Not found";
    } else {
        cout<<"Secound largest element is : "<<secoundLargest<<endl;
    }
    
    return 0;
}