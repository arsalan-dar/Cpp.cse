#include <iostream>
#include <string>
using namespace std;

// display bus timings
void showTimetable(string destination, string timings[], int size) {
    cout << "\n===== JKSRTC Bus Timetable =====\n";
    cout << "Route: Srinagar -> " << destination << endl;
    cout << "--------------------------------\n";
    for (int i = 0; i < size; i++) {
        cout << "Bus " << i + 1 << ": " << timings[i] << endl;
    }
    cout << "--------------------------------\n";
}

int main() {
    int choice;

    // Predefined bus timings for each route
    string kulgam[]   = {"07:00 AM", "10:00 AM", "01:30 PM", "05:00 PM"};
    string anantnag[] = {"06:30 AM", "09:00 AM", "12:00 PM", "04:00 PM"};
    string qazigund[] = {"08:00 AM", "11:30 AM", "03:00 PM", "06:30 PM"};
    string pulwama[]  = {"07:15 AM", "09:45 AM", "01:00 PM", "05:15 PM"};
    string shopian[]  = {"06:45 AM", "10:15 AM", "02:00 PM", "06:00 PM"};

    do {
        cout << "\n===== JKSRTC Bus Service Menu =====\n";
        cout << "1. Srinagar -> Kulgam\n";
        cout << "2. Srinagar -> Anantnag\n";
        cout << "3. Srinagar -> Qazigund\n";
        cout << "4. Srinagar -> Pulwama\n";
        cout << "5. Srinagar -> Shopian\n";
        cout << "6. Exit\n";
        cout << "Enter your choice: ";
        cin >> choice;

        switch (choice) {
            case 1: showTimetable("Kulgam", kulgam, 4); break;
            case 2: showTimetable("Anantnag", anantnag, 4); break;
            case 3: showTimetable("Qazigund", qazigund, 4); break;
            case 4: showTimetable("Pulwama", pulwama, 4); break;
            case 5: showTimetable("Shopian", shopian, 4); break;
            case 6: cout << "Exiting... Thank you for using JKSRTC service!\n"; break;
            default: cout << "Invalid choice. Please try again.\n";
        }

    } while (choice != 6);

    return 0;
}
