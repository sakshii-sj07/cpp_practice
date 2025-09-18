// Find duplicate elements in an array

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
    
    int freq[1000] = {0};
   
    for (int i = 0; i < n; i++)
    {
        freq[(int)arr[i]]++;
    }

    for (int i = 0; i < n; i++)
    {
        if(freq[i] > 1) {
            cout<<i<<" ";
        }
    }
    
    return 0;
}