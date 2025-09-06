// Write a program to create a class Car with members brand, model, and price. Create objects and display them.

#include<iostream>
using namespace std;

class car {
    private :
        string brand;
        string model;
        int price;

    public :
        car();
        car(string b, string m, int p);
        void setBrand(string b);
        void setModel(string m);
        void setPrice(int p);
        string getBrand();
        string getModel();
        int getPrice();
};
int main() {
    car c;
    c.setBrand("BMW");
    c.setModel("Grand coup");
    c.setPrice(460000);
    cout<<"Brand : "<<c.getBrand()<<endl;
    cout<<"Model : "<<c.getModel()<<endl;
    cout<<"Price : "<<c.getPrice()<<endl;
    return 0;
}
car::car() {
    brand = "unknown";
    model = "unknown";
    price = 0;
}
car::car(string b, string m, int p) {
    setBrand(b);
    setModel(m);
    setPrice(p);
}
void car::setBrand(string b) {
    for (int i = 0; i < b.length(); i++)
    {
       b[i] = tolower(b[i]); 
    }
    brand = b;
}
void car::setModel(string m) {
    for (int i = 0; i < m.length(); i++)
    {
        m[i] = tolower(m[i]);
    }
    model = m;
}
void car::setPrice(int p) {
    if(p > 0) {
        price = p;
    } else {
        price = abs(p);
    }
}
string car::getBrand() {
    return brand;
}
string car::getModel() {
    return model;
}
int car::getPrice() {
    return price;
}