#include<iostream>
using namespace std;

int main() {
    int A[] = {1,2,3,4,5,6,7,8,9,10,11,12,13,14,15,16,17,18,19,20};
    int key;
    int mid,l=0,h=19;
    cout<<"Enter key : ";
    cin>>key;

    while (l<=h)
    {
        mid = (l+h)/2;
        if(key==A[mid]) {
            cout<<"key found at "<<mid;
            return 0;
        } else if (key<A[mid]) {
            h=mid-1;
        } else {
            l=mid+1;
        }
    }
    cout<<"not found";
    
    
    return 0;
}