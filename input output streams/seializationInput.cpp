#include<iostream>
#include<fstream>
using namespace std;

class Student {
    public :
        string name;
        int rollNo;
        string collegeName;
        string branch;

        friend ofstream & operator<<(ofstream &ofs , Student &s);
        friend ifstream & operator>>(ifstream &ifs , Student &s);
};

ifstream & operator>>(ifstream &ifs , Student &s) {
    ifs>>s.name>>s.rollNo>>s.collegeName>>s.branch;
    return ifs;
}

ofstream & operator<<(ofstream &ofs , Student &s) {
    ofs<<s.name<<endl;
    ofs<<s.rollNo<<endl;
    ofs<<s.collegeName<<endl;
    ofs<<s.branch<<endl;
    return ofs;
}
int main() {

    Student s1;
    ifstream ifs("Student.txt");
    ifs>>s1;
    
    cout<<s1.name<<endl;
    cout<<s1.rollNo<<endl;
    cout<<s1.collegeName<<endl;
    cout<<s1.branch<<endl;
    ifs.close();
    return 0;
}