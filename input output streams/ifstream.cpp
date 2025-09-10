#include<iostream>
#include<fstream>
using namespace std;

int main() {

    ifstream ifs("My.txt");
    string name;
    int roll;
    string college;
    string branch;

    ifs>>name>>roll>>college>>branch;
    ifs.close();

    cout<<"Name : "<<name<<endl;
    cout<<"Roll no : "<<roll<<endl;
    cout<<"college name : "<<college<<endl;
    cout<<"Branch : "<<branch<<endl;
    return 0;
}