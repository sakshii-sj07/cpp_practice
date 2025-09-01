#include<iostream>
using namespace std;

int main() {
    float billAmount;
    float discount;
    cout<<"Enter bill amount : ";
    cin>>billAmount;

    if (billAmount < 100)
    {
        cout<<"no discount";
    } else if (billAmount >= 100 && billAmount < 500) {
        discount =billAmount - billAmount*10/100;
        cout<<"Discount is : "<<discount;
    } else if (billAmount >= 500) {
        discount =billAmount - billAmount*20/100;
        cout<<"Discount is : "<<discount;
    }
    
    return 0;
}