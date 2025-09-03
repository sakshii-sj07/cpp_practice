//find the username from email

#include<iostream>
#include<string>
using namespace std;

int main() {
    string email = "sakshijadhav8856@gmail.com";
    int i = email.find('@');
    string userName = email.substr(0,i);

    cout<<userName;
    
    
    return 0;
}