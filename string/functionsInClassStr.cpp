#include<iostream>
#include<string>
using namespace std;

int main() {
    string s = "Sakshi";

    cout<<s.length()<<endl;
    cout<<s.size()<<endl;
    cout<<s.capacity()<<endl;
    cout<<s.max_size()<<endl;
    cout<<s.empty()<<endl;
    return 0;
}