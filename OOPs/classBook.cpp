// Write a program using a class Book that stores title, author, and price. Print book details.

#include<iostream>
using namespace std;

class book {
    private:
        string title;
        string author;
        int price;

    public :
        void setData(string t, string a,int p) {
            title = t;
            author = a;
            price = p;
        }    
        void display() {
            cout<<"Title : "<<title<<endl;
            cout<<"Author : "<<author<<endl;
            cout<<"Price : "<<price<<endl;
        }
};

int main() {
    book b;
    b.setData("Mrutyunjay" , "Shivaji sawant", 1000);
    b.display();
}