#include <stdio.h>

float calculateWaterBill(int liters) {
    float bill = 0.0;

    if (liters <= 1000) {
        bill = 0.0;
    } else if (liters <= 5000) {
        bill = (liters - 1000) * 0.5;
    } else if (liters <= 10000) {
        bill = (4000 * 0.5) + (liters - 5000) * 1.0;
    } else {
        bill = (4000 * 0.5) + (5000 * 1.0) + (liters - 10000) * 2.0;
    }

    return bill;
}

int main() {
    int liters;
    float totalBill;

    printf("Enter the amount of water used in liters: ");
    scanf("%d", &liters);

    if (liters < 0) {
        printf("Invalid input! Water usage cannot be negative.\n");
        return 1;
    }

    totalBill = calculateWaterBill(liters);
    printf("Total Water Bill: ₹%.2f\n", totalBill);

    return 0;
}
