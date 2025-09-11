#include<iostream>
#include<forward_list>
using namespace std;

int main() {
    forward_list<int> f = {12,23,32,31,43,30};
    f.push_front(2);
    f.push_front(7);
    f.pop_front();

    cout<<"Display using for each loop.";
    for(int x:f) {
        cout<<x<<endl;
    }

    cout<<endl;

    cout<<"Display using iterator.";
    forward_list<int>::iterator itr;
    for(itr = f.begin(); itr != f.end(); itr++) {
        cout<<*itr<<endl;
    }
    return 0;
}