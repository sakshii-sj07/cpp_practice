#include<iostream>
using namespace std;

int main() {
    char S[100];
    char S2[100];

    cout<<"Enter your name : ";
    // cin>>S;
    cin.get(S,100);  //It does not take input of next string because the get function it considered as enter key.
    // cin.getline(S,100); //It takes input.
    cout<<S<<endl;

    cin.ignore(); //If you want get take next input insted it considered as enter key we use ignore key.

    cout<<"Enter your name Again : ";
    // cin>>S2;
    cin.get(S2,100);
    // cin.getline(S2,100);
    cout<<S2;
    return 0;
}