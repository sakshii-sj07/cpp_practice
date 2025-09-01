#include<iostream>
using namespace std;

int main() {
    
    float disAmount , amount;

    cout<<"Enter amount : ";
    cin>>amount;

    if(amount >= 5000) {
        disAmount = amount-amount*20/100;
        cout<<disAmount;

    } else if (amount >= 2000 && amount <= 5000 ) {
        disAmount = amount-amount*10/100;
        cout<<disAmount;

    } else {
        disAmount = amount-amount*5/100;
        cout<<disAmount;
    }
    return 0;
}