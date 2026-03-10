#include <iostream>
#include <string>
using namespace std;

class BankAccount{
private:
    int accountNumber;
    string accountHolderName;
    double balance;

public:
    BankAccount(){
        accountNumber = 0;
        accountHolderName = " ";
        balance = 0.0;
    }

    BankAccount(int n, string na, double b){
        accountNumber = n;
        accountHolderName = na;
        balance = b;
    }

    void setAccountNumber(int n){ accountNumber = n; }
    void setAccountHolderName(string na){ accountHolderName = na; }

    void setBalance(double b){
        if(b >= 0){
            this->balance = b;
        }
        else{
            cout << "Error: Balance cannot be negative!" << endl;
        }
    }

    int getAccountNumber(){ return accountNumber; }
    string getAccountHolderName(){ return accountHolderName; }
    double getBalance(){ return balance; }

    // NEW: Deposit function
    void deposit(double amount) {
        if(amount > 0) {
            balance += amount;
            cout << "Deposited Rs. " << amount << ". New balance: Rs. " << balance << endl;
        } else {
            cout << "Error: Deposit amount must be positive!" << endl;
        }
    }

    // NEW: Withdraw function
    void withdraw(double amount) {
        if(amount > 0 && amount <= balance) {
            balance -= amount;
            cout << "Withdrew Rs. " << amount << ". New balance: Rs. " << balance << endl;
        } else if(amount > balance) {
            cout << "Error: Insufficient balance!" << endl;
        } else {
            cout << "Error: Withdrawal amount must be positive!" << endl;
        }
    }

    // Display account details
    void displayDetails() {
        cout << "\n=== Account Details ===" << endl;
        cout << "Account Number: " << accountNumber << endl;
        cout << "Account Holder: " << accountHolderName << endl;
        cout << "Current Balance: Rs. " << balance << endl;
    }
};

int main(){
    BankAccount b1(123456, "Sneha", 1000.0);  // Starting balance Rs. 1000
    int choice;
    double amount;

    cout << "Welcome to Bank Management System!" << endl;

    while(true) {
        cout << "\n=== MENU ===" << endl;
        cout << "1. Deposit Money" << endl;
        cout << "2. Withdraw Money" << endl;
        cout << "3. Display Account Details" << endl;
        cout << "4. Exit" << endl;
        cout << "Enter your choice (1-4): ";
        cin >> choice;

        switch(choice) {
            case 1:
                cout << "Enter deposit amount: Rs. ";
                cin >> amount;
                b1.deposit(amount);
                break;

            case 2:
                cout << "Enter withdrawal amount: Rs. ";
                cin >> amount;
                b1.withdraw(amount);
                break;

            case 3:
                b1.displayDetails();
                break;

            case 4:
                cout << "\nThank you for banking with us!" << endl;
                return 0;

            default:
                cout << "\nInvalid choice! Please try again." << endl;
        }
    }
    return 0;
}
