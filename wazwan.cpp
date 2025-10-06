#include <iostream>
#include <string>
using namespace std;

void showMenu() {
    cout << "\n======= Kashmiri Wazwan Recipes =======\n";
    cout << "1. Rogan Josh\n";
    cout << "2. Gushtaba\n";
    cout << "3. Yakhni\n";
    cout << "4. Rista\n";
    cout << "5. Modur Pulav\n";
    cout << "6. Exit\n";
    cout << "======================================\n";
    cout << "Enter your choice (1-6): ";
}

void roganJosh() {
    cout << "\n--- Rogan Josh ---\n";
    cout << "Ingredients:\n";
    cout << "- Mutton: 500g\n"
         << "- Yogurt: 1 cup\n"
         << "- Kashmiri red chili powder: 2 tsp\n"
         << "- Fennel powder: 1 tsp\n"
         << "- Ginger powder: 1 tsp\n"
         << "- Asafoetida (hing): a pinch\n"
         << "- Mustard oil: 4 tbsp\n"
         << "- Salt to taste\n\n";

    cout << "Preparation:\n";
    cout << "1. Heat mustard oil and add hing.\n";
    cout << "2. Add mutton pieces and fry until brown.\n";
    cout << "3. Add chili, fennel, and ginger powder.\n";
    cout << "4. Mix yogurt and cook till oil separates.\n";
    cout << "5. Add water, cover, and simmer till meat is tender.\n";
}

void gushtaba() {
    cout << "\n--- Gushtaba ---\n";
    cout << "Ingredients:\n";
    cout << "- Minced mutton: 500g\n"
         << "- Yogurt: 2 cups\n"
         << "- Fennel powder: 1 tsp\n"
         << "- Dry ginger powder: 1 tsp\n"
         << "- Cardamom: 2 pods\n"
         << "- Mustard oil: 3 tbsp\n"
         << "- Salt to taste\n\n";

    cout << "Preparation:\n";
    cout << "1. Pound the minced mutton till smooth.\n";
    cout << "2. Make smooth balls (gushtabas).\n";
    cout << "3. Boil in yogurt gravy with spices.\n";
    cout << "4. Cook on low flame till tender.\n";
}

void yakhni() {
    cout << "\n--- Yakhni ---\n";
    cout << "Ingredients:\n";
    cout << "- Mutton: 500g\n"
         << "- Yogurt: 1.5 cups\n"
         << "- Fennel powder: 1 tsp\n"
         << "- Ginger powder: 1 tsp\n"
         << "- Bay leaves: 2\n"
         << "- Cloves: 3\n"
         << "- Salt to taste\n\n";

    cout << "Preparation:\n";
    cout << "1. Boil mutton with spices till soft.\n";
    cout << "2. Add whisked yogurt and cook on low flame.\n";
    cout << "3. Simmer till the gravy thickens and aromatic.\n";
}

void rista() {
    cout << "\n--- Rista ---\n";
    cout << "Ingredients:\n";
    cout << "- Minced mutton: 500g\n"
         << "- Red chili powder: 2 tsp\n"
         << "- Onions: 2 (sliced)\n"
         << "- Cardamom & cloves: 2 each\n"
         << "- Mustard oil: 3 tbsp\n"
         << "- Salt to taste\n\n";

    cout << "Preparation:\n";
    cout << "1. Prepare smooth meatballs (ristas).\n";
    cout << "2. Fry onions and spices in oil.\n";
    cout << "3. Add chili powder and water to make gravy.\n";
    cout << "4. Add meatballs and simmer till done.\n";
}

void modurPulav() {
    cout << "\n--- Modur Pulav ---\n";
    cout << "Ingredients:\n";
    cout << "- Basmati rice: 1 cup\n"
         << "- Milk: 1 cup\n"
         << "- Ghee: 2 tbsp\n"
         << "- Saffron: few strands\n"
         << "- Sugar: 3 tbsp\n"
         << "- Dry fruits: almonds, raisins, cashews\n\n";

    cout << "Preparation:\n";
    cout << "1. Soak saffron in warm milk.\n";
    cout << "2. Fry dry fruits in ghee.\n";
    cout << "3. Add rice, milk, sugar, and saffron.\n";
    cout << "4. Cook on low flame till rice is soft and aromatic.\n";
}

int main() {
    int choice;

    do {
        showMenu();
        cin >> choice;
        switch (choice) {
            case 1: roganJosh(); break;
            case 2: gushtaba(); break;
            case 3: yakhni(); break;
            case 4: rista(); break;
            case 5: modurPulav(); break;
            case 6: cout << "Exiting... Enjoy your Wazwan!\n"; break;
            default: cout << "Invalid choice! Please try again.\n";
        }
    } while (choice != 6);

    return 0;
}
