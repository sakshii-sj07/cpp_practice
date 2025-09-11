#include<iostream>
#include<list>
using namespace std;

int main() {
    list<int> l = {12,34,32,65,41,11,21};
    l.push_back(3);
    l.push_back(5);
    l.pop_back();

    cout<<"Dispaly using for each loop.";
    for(int x:l) {
        cout<<x<<endl;
    }

    cout<<endl;

    cout<<"Dispaly using iterator.";
    list<int>::iterator itr;
    for(itr = l.begin() ; itr != l.end() ; itr++) {
        cout<<*itr<<endl;
    }
    return 0;
}