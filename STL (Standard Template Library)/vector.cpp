#include<iostream>
#include<vector>
using namespace std;

int main() {
    vector<int> v = {2,4,6,8,5,1,3};
    v.push_back(30);
    v.push_back(45);
    v.pop_back();

    cout<<"Display using for each loop.";
    for(int x:v) {
        cout<<x<<endl;
    }

    cout<<endl;
    
    cout<<"Display using Iterator.";
    vector<int>::iterator itr ;
    for (itr = v.begin(); itr != v.end() ; itr++)
    {
       cout<<*itr<<endl;
    }
    
    return 0;
}