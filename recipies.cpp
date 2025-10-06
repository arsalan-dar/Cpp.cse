#include <iostream>
using namespace std;

void chickenCurry() {
    cout << "\n--- Chicken Curry Recipe ---\n";
    cout << "1. Clean and cut chicken pieces.\n";
    cout << "2. Heat oil, add onions, ginger-garlic paste, and tomatoes.\n";
    cout << "3. Add spices (turmeric, chili powder, garam masala, salt).\n";
    cout << "4. Add chicken pieces and cook until tender.\n";
    cout << "5. Garnish with coriander and serve hot with rice or roti.\n\n";
}

void muttonCurry() {
    cout << "\n--- Mutton Curry Recipe ---\n";
    cout << "1. Wash and marinate mutton with curd, salt, and spices.\n";
    cout << "2. Heat oil, fry onions, ginger-garlic paste, and green chilies.\n";
    cout << "3. Add tomatoes and cook until soft.\n";
    cout << "4. Add marinated mutton and water. Pressure cook until tender.\n";
    cout << "5. Garnish with coriander leaves. Serve with naan or rice.\n\n";
}

void chickenBiryani() {
    cout << "\n--- Chicken Biryani Recipe ---\n";
    cout << "1. Marinate chicken with yogurt, ginger-garlic paste, and spices.\n";
    cout << "2. Half cook basmati rice with whole spices.\n";
    cout << "3. In a pot, layer chicken and rice alternately.\n";
    cout << "4. Add saffron milk or food color on top.\n";
    cout << "5. Cover tightly and cook on low flame (dum) for 25-30 minutes.\n";
    cout << "6. Serve hot with raita.\n\n";
}

int main() {
    int choice;
    do {
        cout << "===== Recipe Menu =====\n";
        cout << "1. Chicken Curry\n";
        cout << "2. Mutton Curry\n";
        cout << "3. Chicken Biryani\n";
        cout << "4. Exit\n";
        cout << "Enter your choice: ";
        cin >> choice;

        switch (choice) {
            case 1: chickenCurry(); break;
            case 2: muttonCurry(); break;
            case 3: chickenBiryani(); break;
            case 4: cout << "Exiting... Happy Cooking!\n"; break;
            default: cout << "Invalid choice. Please try again.\n";
        }

    } while (choice != 4);

    return 0;
}
