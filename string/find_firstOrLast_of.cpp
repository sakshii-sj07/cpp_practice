#include<iostream>
#include<string>
using namespace std;

int main() {
    string s = "Programming";
    cout<<s.find_last_of('m')<<endl;
    cout<<s.find_first_of('m');
    return 0;
}