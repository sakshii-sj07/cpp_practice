// write a class for student with roll_no, name, marks in 3 subject.

#include<iostream>
using namespace std;

class student {
    private :
        string name;
        int roll_no;
        int phyMarks;
        int chemMarks;
        int mathMarks;

    public :
        student();
        student(string n, int r, int p, int c, int m);
        void setName(string n);
        void setRoll_no(int r);
        void setPhyMarks(int p);
        void setChemMarks(int c);
        void setMathMarks(int m);
        string getName();
        int getRoll_no();
        int getPhyMarks();
        int getChemMarks();
        int getMathMarks();
        int totalMarks();
        char grade();
        bool isSquare();
        ~student();
};

int main(){
    student s;

    s.setName("Sakshi");
    s.setRoll_no(84);
    s.setChemMarks(63);
    s.setPhyMarks(66);
    s.setMathMarks(90);


    cout<<"Name : "<<s.getName()<<endl;
    cout<<"Roll no : "<<s.getRoll_no()<<endl;
    cout<<"Total marks : "<<s.totalMarks()<<endl;
    cout<<"Grade : "<<s.grade()<<endl;
    return 0;
}

student::student(string n, int r, int p, int c, int m) {
    setName(n);
    setRoll_no(r);
    setPhyMarks(p);
    setChemMarks(c);
    setMathMarks(m);
}
student::student() {
    name = "Unknown";
    roll_no = 0;
    phyMarks = 0;
    chemMarks = 0;
    mathMarks = 0;
}


void student::setName(string n) {
    for (int i = 0; i <n.length(); i++)
    {
        n[i] = tolower(n[i]);
    }
    name = n;
}

void student::setRoll_no(int r) {
    if(r > 0) {
        roll_no = r;
    } else {
        roll_no = abs(r);
    }
}

void student::setPhyMarks(int p) {
    if (p >= 0 && p <= 100) {
        phyMarks = p;
    } else {
        phyMarks = 0;
    }
}
void student::setChemMarks(int c) {
    if (c >= 0 && c <= 100) {
        chemMarks = c;
    } else {
        chemMarks = 0;
    }
}
void student::setMathMarks(int m) {
    if (m >= 0 && m <= 100) {
        mathMarks = m;
    } else {
        mathMarks = 0;
    }
}

string student::getName() {
    return name;
}
int student::getRoll_no() {
    return roll_no;
}
int student::getPhyMarks() {
    return phyMarks;
}
int student::getChemMarks() {
    return chemMarks;
}
int student::getMathMarks() {
    return mathMarks;
}

int student::totalMarks() {
    return phyMarks+chemMarks+mathMarks;
}
char student::grade() {
    int avg = totalMarks() / 3;
    if (avg >= 75) {
        return 'A';
    } else if (avg >= 50) {
        return 'B';
    } else if (avg >= 35) {
        return 'C';
    } else {
        return 'F';
    }
}

bool student::isSquare() {
    return (phyMarks == chemMarks && phyMarks == mathMarks);
}
student::~student() {
    cout<<"Destructor for "<<name;
}
