// friend function.

#include<iostream>
using namespace std;

class myClass {
    private :
        string name;
    protected :
        double mob;
    public :
        string school;   
        
    friend int main();    
};
int main() {
    myClass c;
    c.name = "sakshi";
    c.mob = 9420324510;
    c.school = "ssvp"; 

    cout<<c.name<<endl;
    cout<<c.mob<<endl;
    cout<<c.school<<endl;
    return 0;
}