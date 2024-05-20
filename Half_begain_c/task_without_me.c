#include <iostream>
#include <string>

using namespace std;

const int MAX_ACCOUNTS = 100; // Maximum number of accounts
const int ACCOUNT_NUMBER_LENGTH = 10; // Length of account number

struct Account {
    string accountNumber;
    double balance;
    string transactionHistory;
};

Account accounts[MAX_ACCOUNTS]; // Array to store accounts
int numAccounts = 0; // Number of accounts currently in the system

void deposit(string accNum, double amount) {
    for (int i = 0; i < numAccounts; ++i) {
        if (accounts[i].accountNumber == accNum) {
            accounts[i].balance += amount;
            accounts[i].transactionHistory += "Deposit: $" + to_string(amount) + "\n";
            return;
        }
    }
    cout << "Account not found." << endl;
}

bool withdraw(string accNum, double amount) {
    for (int i = 0; i < numAccounts; ++i) {
        if (accounts[i].accountNumber == accNum) {
            if (accounts[i].balance >= amount) {
                accounts[i].balance -= amount;
                accounts[i].transactionHistory += "Withdrawal: $" + to_string(amount) + "\n";
                return true;
            } else {
                cout << "Insufficient funds." << endl;
                return false;
            }
        }
    }
    cout << "Account not found." << endl;
    return false;
}

void displayBalance(string accNum) {
    for (int i = 0; i < numAccounts; ++i) {
        if (accounts[i].accountNumber == accNum) {
            cout << "Account Number: " << accNum << endl;
            cout << "Current Balance: $" << accounts[i].balance << endl;
            return;
        }
    }
    cout << "Account not found." << endl;
}

void displayTransactionHistory(string accNum) {
    for (int i = 0; i < numAccounts; ++i) {
        if (accounts[i].accountNumber == accNum) {
            cout << "Transaction History for Account " << accNum << ":" << endl;
            cout << accounts[i].transactionHistory;
            return;
        }
    }
    cout << "Account not found." << endl;
}

int main() {
    // Example usage
    deposit("1234567890", 1000);
    withdraw("1234567890", 200);
    displayBalance("1234567890");
    displayTransactionHistory("1234567890");

    return 0;
}

