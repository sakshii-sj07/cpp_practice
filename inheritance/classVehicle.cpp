// write a base class for vehicle and derived classes for car bike bus.

#include<iostream>
using namespace std;

class Vehicle {
    public:
        void start() {
            cout<<"Vehicle started!"<<endl;
        }
        void stop() {
            cout<<"Vehicle stopped!"<<endl;
        }
};
class Car : public Vehicle {
    public:
        void drive() {
            cout<<"Car is driven on a road."<<endl;
        }
};
class Bike : public Vehicle {
    public:
        void ride() {
            cout<<"Bike is ridden on a road."<<endl;
        }
};
class Bus : public Vehicle {
    public:
        void transport() {
            cout<<"Bus is transport on a road."<<endl;
        }
};
int main() {
    Car c;
    Bike b;
    Bus s;

    c.start();
    c.drive();
    c.stop();

    cout<<endl;

    b.start();
    b.ride();
    b.stop();

    cout<<endl;

    s.start();
    s.transport();
    s.stop();

    cout<<endl;
    return 0;
}