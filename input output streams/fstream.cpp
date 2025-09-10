#include<iostream>
#include<fstream>

using namespace std;

int main() {

    ofstream ofs("My.txt");

    ofs<<"sakshi "<<endl;
    ofs<<84<<endl;
    ofs<<"DYP "<<endl;
    ofs<<"CSE "<<endl;
    ofs.close();
    return 0;
}