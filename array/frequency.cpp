// Count frequency of each element in an array.

#include<iostream>
#include<map>
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

    map<int,int> freq;
    for (int i = 0; i < n; i++)
    {
        freq[arr[i]]++;
    }

    cout<<"Frequencies are"<<endl;
    for(auto it : freq) {
        cout<<it.first<<" occurs "<<it.second<<" times "<<endl;
    }
    
    
}