// runtime polymorphism

#include<iostream>
using namespace std;

class Animal {
    public :
        virtual void sound() {
            cout<<"Animal sound \n";
        }
};
class Dog : public Animal {
    public :
        void sound() {
            cout<<"Dog barking \n";
        }
};
class Cat : public Animal {
    public :
        void sound() {
            cout<<"Cat meow \n";
        }
};
int main() {
   Animal *a;

   Dog d;
   Cat c;

   a = &d;
   a -> sound();

   a = &c;
   a -> sound();


    return 0;
}