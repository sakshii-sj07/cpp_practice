#include <iostream>
using namespace std;

class savingAccount
{
private:
    string accountHoldername;
    int accountNumber;
    double balance;
    double interestrate;

public:
    savingAccount(string name, int accNumber, double initialbalance, double rate)
    {
        accountHoldername = name;
        accountNumber = accNumber;
        balance = initialbalance;
        interestrate = rate;
    }

    void deposit(double amount)
    {
        if (amount > 0)
        {
            balance = balance + amount;
            cout << "Deposited amount : " << amount << endl;
        }
    }

    void withdraw(double amount)
    {
        if (amount > 0 && amount <= balance)
        {
            balance = balance - amount;
            cout << "Withdrawn amount : " << amount << endl;
        }
        else
        {
            cout << "Insufficient balance ." << endl;
        }
    }

    void applyInterest()
    {
        double interest = balance * interestrate / 100;
        balance = balance + interest;
        cout << "Interest applied : " << interest << endl;
    }

    void dispaly()
    {
        cout << "-----Saving Account----\n";
        cout << "Account Holder : " << accountHoldername << endl;
        cout << "Accont Number : " << accountNumber << endl;
        cout << "Balance : " << balance << endl;
        cout << "Interest : " << interestrate << endl;
    }
};

class CheckingAccount
{
private:
    string accountHolderName;
    int accountNumber;
    double balance;
    double transactionFee;

public:
    CheckingAccount(string name, int accNumber, double initialBalance, double fee)
    {
        accountHolderName = name;
        accountNumber = accNumber;
        balance = initialBalance;
        transactionFee = fee;
    }

        void deposit(double amount)
        {
            if (amount > 0)
            {
                balance = balance + amount;
                cout << "Deposited amount : " << amount << endl;
            }
        }

        void withdraw(double amount)
        {
            if (amount > 0 && amount <= balance)
            {
                balance = balance - amount;
                cout << "Withdrawn amount : " << amount << endl;
            }
            else
            {
                cout << "Insufficient balance ." << endl;
            }
        }

        void dispaly()
        
        {
            cout << "-----Saving Account----\n";
            cout << "Account Holder : " << accountHolderName << endl;
            cout << "Accont Number : " << accountNumber << endl;
            cout << "Balance : " << balance << endl;
            cout << "Transaction fee : " <<transactionFee << endl;
        }
    };


int main() {
    savingAccount savings("alice",1001,5000.0, 3.0);
    CheckingAccount checking("bob",1002,3000.0,20.0);

    savings.dispaly();
    savings.deposit(1000);
    savings.withdraw(2000);
    savings.applyInterest();
    savings.dispaly();

    checking.dispaly();
    checking.deposit(1500);
    checking.withdraw(1000);
    checking.dispaly();
    return 0;
}