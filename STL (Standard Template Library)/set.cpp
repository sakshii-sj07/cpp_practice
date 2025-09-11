#include<iostream>
#include<set>
using namespace std;

int main() {
    set<int> s = {2,4,3,1,6,8};
    s.insert(34);
    s.insert(76);
    s.empty();

    cout<<"Display using for each loop."<<endl;
    for(int x:s) {
        cout<<x<<endl;
    }

    cout<<endl;

    cout<<"Display using itrator."<<endl;
    set<int>::iterator itr;
    for(itr = s.begin(); itr != s.end(); itr++) {
        cout<<*itr<<endl;
    }
    return 0;
}