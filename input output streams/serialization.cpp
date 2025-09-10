#include<iostream>
#include<fstream>
using namespace std;

class Student {
    public:
        string name;
        int rollNo;
        string collegeName;
        string branch;
        friend ofstream & operator<<(ofstream &ofs, Student &s);
};

ofstream & operator<<(ofstream &ofs, Student &s) {
    ofs<<s.name<<endl;
    ofs<<s.rollNo<<endl;
    ofs<<s.collegeName<<endl;
    ofs<<s.branch<<endl;
}
int main() {

    Student s1;
    s1.name = "Sakshi ";
    s1.rollNo = 84;
    s1.collegeName = "DYP";
    s1.branch = "CSE";

    ofstream ofs("Student.txt");

    ofs<<s1;
    ofs.close();
    return 0;
}