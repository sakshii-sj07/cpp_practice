// abstract function.

#include<iostream>
using namespace std;

class Car {
    public :
        virtual void speed()=0;
        virtual void show()=0;
};
class innova : public Car {
    public :
        void speed() {
            cout<<"Innova speed. \n";
        }
        void show() {
            cout<<"Innova showing. \n";
        }
};
class creta : public Car {
    public :
        void speed() {
            cout<<"Creta speed. \n";
        }
        void show() {
            cout<<"creta showing. \n";
        }
};
int main() {
    Car *car;

    innova i;
    creta c;

    car = &i;
    car -> speed();
    car -> show();

    car = &c;
    car -> speed();
    car -> show();
    return 0;
}