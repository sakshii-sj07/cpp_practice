//Copy one array to another array

#include<iostream>
using namespace std;

int main() {
    int n;
    cout<<"Enter number of array : ";
    cin>>n;

    int arr1[n] , arr2[n];    
   
    cout<<"Enter "<<n<<" numbers : ";
    for (int i = 0; i < n; i++)
    {
        cin>>arr1[i];
    }


    for (int i = 0; i < n; i++)
    {
       arr2[i] = arr1[i];
    }
    
    cout<<"The secound array is :";
    for (int i = 0; i < n; i++)
    {
        cout<<arr2[i]<<" ";
    }
    
    
    return 0;
}