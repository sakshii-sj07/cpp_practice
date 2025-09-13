// Online Shopping Cart
// Class Item (id, name, price).
// Class Cart to add/remove items and calculate total bill.

#include<iostream>
#include<vector>
using namespace std;

class Item {
    public:
        int id;
        string name;
        int price;

        Item(int i, string n , int p) {
            id = i;
            name = n;
            price = p;
        }
};

class Cart {
    private:
        vector<Item> items;
    public:
        void addItem(Item item) {
            items.push_back(item);
            cout<<"Item added : "<<item.name<<endl;
        }    

        void removeItem(int id) {
            for(auto it = items.begin(); it != items.end(); it++) {
                if(it->id == id) {
                    cout<<it->name<<" Removed from cart "<<endl;
                    items.erase(it);
                    return;
                }
        }
        cout<<"Item not found.";
        }

        int calculateBill() {
            int total = 0;
            for(auto &item : items) {
                total = total + item.price;
            }
            return total;
        }

        void displayCart() {
            if(items.empty()) {
                cout<<"Cart is empty.";
                return;
            } 
            cout<<"---- items in cart ---- \n";
            for(auto &item : items) {
                cout<<"ID : "<<item.id<<". Name : "<<item.name<<". Price : "<<item.price<<endl;
            }
        }
};

int main() {
    Cart cart;

    Item item1(1,"laptop",50000);
    Item item2(2,"Mobile",20000);
    Item item3(3,"Headphone",2000);

    cout<<endl;

    cart.addItem(item1);
    cart.addItem(item2);
    cart.addItem(item3);

    cout<<endl;

    cart.displayCart();

    cout<<endl;

    cart.removeItem(2);

    cout<<endl;

    cart.displayCart();
    cout<<"The total bill is : "<<cart.calculateBill();
}