#include <stdio.h>

float calculateElectricityBill(int units) {
    float bill = 0.0;

    if (units <= 100) {
        bill = units * 1.5;
    } else if (units <= 300) {
        bill = (100 * 1.5) + (units - 100) * 2.5;
    } else if (units <= 500) {
        bill = (100 * 1.5) + (200 * 2.5) + (units - 300) * 4.0;
    } else {
        bill = (100 * 1.5) + (200 * 2.5) + (200 * 4.0) + (units - 500) * 6.0;
    }

    // Add fixed meter charge
    bill += 50.0;

    // Apply surcharge if bill exceeds ₹1000
    if (bill > 1000) {
        bill += bill * 0.15; // 15% surcharge
    }

    return bill;
}

int main() {
    int units;
    float totalBill;

    printf("Enter electricity units consumed: ");
    scanf("%d", &units);

    if (units < 0) {
        printf("Invalid input! Units cannot be negative.\n");
        return 1;
    }

    totalBill = calculateElectricityBill(units);
    printf("Total Electricity Bill: ₹%.2f\n", totalBill);

    return 0;
}
