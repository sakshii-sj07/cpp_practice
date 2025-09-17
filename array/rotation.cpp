// Rotate array by k positions (left & right)

#include<iostream>
using namespace std;

void leftRotation(int arr[] , int k , int n) {
    cout<<"rotated from left side by "<<k<<endl;
    for (int i = 0; i < n; i++)
    {
        cout<<arr[(i + k )% n]<<" ";
    }
    cout<<endl;
}

void rightRotation(int arr[], int k, int n) {
    cout<<"rotated from right side by "<<k<<endl;
    for (int i = 0; i < n; i++)
    {
        cout<<arr[(i - k + n ) % n]<<" ";
    }
    cout<<endl;
}

int main() {
    int n;
    cout<<"Enter elements in array : ";
    cin>>n;

    int arr[n];
    cout<<"Enter "<<n<<" elements : ";
    for (int  i = 0; i < n; i++)
    {
        cin>>arr[i];
    }

    cout<<endl;
    
    int k;
    cout<<"Enter position for rotation : ";
    cin>>k;

    leftRotation(arr, k , n);
    rightRotation(arr, k , n);
    return 0;

}
