#include <iostream>
#include <string>
using namespace std;

int main() {
    const int MAX_CATEGORIES = 10;
    string categories[MAX_CATEGORIES] = {"Rent", "Food", "Travel", "Electricity", "Internet", "Shopping", "Entertainment", "Healthcare", "Education", "Others"};
    double expenses[MAX_CATEGORIES];
    double total = 0;

    cout << "===== Monthly Expenses Calculator =====\n";

    // Taking expenses input
    for (int i = 0; i < MAX_CATEGORIES; i++) {
        cout << "Enter expense for " << categories[i] << ": ";
        cin >> expenses[i];
        total += expenses[i];
    }

    // Displaying results
    cout << "\n===== Expense Report =====\n";
    for (int i = 0; i < MAX_CATEGORIES; i++) {
        cout << categories[i] << ": " << expenses[i] << endl;
    }

    cout << "--------------------------\n";
    cout << "Total Monthly Expense: " << total << endl;
    cout << "Average Expense per Category: " << total / MAX_CATEGORIES << endl;

    return 0;
}
