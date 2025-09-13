/* ATM Simulation
Class ATM that allows checkBalance(), deposit(), withdraw().
Handle cases like insufficient balance. */

#include<iostream>
using namespace std;

class ATM {
    private:
        double balance;
    public:
        ATM();
        ATM(double initialBalance);
        void checkBalance();
        void deposite(double amount);
        void withdraw(double amount);    
};

ATM::ATM() {
    balance = 0;
}
ATM::ATM(double initialBalance) {
    if(initialBalance >= 0) {
       balance = initialBalance;
    } else {
        balance = 0;
    }
}
void ATM::checkBalance() {
    cout<<"Balance in your account : "<< balance << endl;
}

void ATM::deposite(double amount) {
    if(amount >= 0) {
        balance = balance + amount;
        cout<<"Your amount deposited successfully !"<<endl;
        cout<<"Total balance after depositing : "<< balance << endl;
    } else {
        cout<<"Invalid balance."<<endl;
    }
}

void ATM::withdraw(double amount) {
    if(amount <= 0) {
        cout<<"Insufficient balance for withdraw!";
    } else if (amount > balance) {
        cout<<"Check balance.";
    } else {
        balance = balance - amount;
    }
    cout<<"Your amount withdrawed successfully!"<<endl;
    cout<<"Total balance after withdraw : "<< balance << endl;
}

int main() {
    ATM atm(1000);
    int choice;
    double amount;

    cout<<endl;

    while(true) {
        cout<<"-----Choose option----- \n";
        cout<<"1.checkBalance \n";
        cout<<"2.deposite \n";
        cout<<"3.withdraw \n";
        cout<<"Enter your choice : ";
        cin >> choice;

        switch (choice)
        {
        case 1:
            atm.checkBalance();
            break;

        case 2:
            cout<<"Enter deposite amount : ";
            cin>> amount ;
            atm.deposite(amount);
            break;

        case 3:
            cout<<"Enter withdraw amount : ";
            cin >> amount;
            atm.withdraw(amount);
            break;

        case 4:
            cout<<"Thank you for using our ATM. \n";
            return 0;

        default:
            cout<<"Invalid Choice.";
            break;
        }
    }
    return 0;
}