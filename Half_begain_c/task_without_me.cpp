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

// Function to generate a unique account number
string generateAccountNumber() {
    // Simple implementation: using a counter as part of the account number
    return "ACCT-" + to_string(numAccounts + 1);
}

void createAccount(double initialBalance) {
    if (numAccounts < MAX_ACCOUNTS) {
        string accNum = generateAccountNumber();
        accounts[numAccounts] = { accNum, initialBalance, "" };
        numAccounts++;
        cout << "Account created successfully. Account Number: " << accNum << endl;
    } else {
        cout << "Cannot create more accounts. Maximum limit reached." << endl;
    }
}

int main() {
    char createAnother;
    do {
        double initialBalance;
        cout << "Enter initial balance for your new account: ";
        cin >> initialBalance;
        createAccount(initialBalance);

        cout << "Do you want to create another account? (y/n): ";
        cin >> createAnother;
    } while (createAnother == 'y' || createAnother == 'Y');

    return 0;
}

