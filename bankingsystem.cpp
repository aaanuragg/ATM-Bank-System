#include <iostream>
using namespace std;

int main() {
    int balance = 1000;
    int amount, choice;

    int pin = 1611;
    int enteredPin;
    int attempts = 0;
    while (attempts < 3) {
        cout << "Enter your PIN: ";
        cin >> enteredPin;
        if (enteredPin == pin) {
            cout << "PIN verified successfully!\n";
            break;
        } else {
            attempts++;
            cout << "Wrong PIN! Attempts left: " << 3 - attempts << endl;
        }
    }
    if (attempts == 3) {
        cout << "Sorry ! Card blocked!!!! Too many wrong attempts.";
        return 0;
    }
    do {
        cout << "\n BANK MENU ";
        cout << "\n1. Check Balance";
        cout << "\n2. Deposit Money";
        cout << "\n3. Withdraw Money";
        cout << "\n4. Exit";
        cout << "\nEnter your choice: ";
        cin >> choice;
        if (choice == 1) {
            cout << "Current balance: " << balance;
        }
        else if (choice == 2) {
            cout << "Enter amount to deposit: ";
            cin >> amount;
            if (amount > 0) {
                balance += amount;
                cout << "Deposit successful.";
            } else {
                cout << "Invalid amount!";
            }
        }
        else if (choice == 3) {
            cout << "Enter amount to withdraw : ";
            cin >> amount;
            if (amount > balance) {
                cout << "Insufficient balance!";
            }
            else if (amount <= 0) {
                cout << "Invalid amount!";
            }
            else {
                balance -= amount;
                cout << "Please collect your cash.";
            }
        }
        else if (choice == 4) {
            cout << "Thank you for using the bank system.";
        }
        else {
            cout << "Invalid choice!";
        }

    } while (choice != 4);

    return 0;
}
