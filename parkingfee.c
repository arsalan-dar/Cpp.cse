#include <stdio.h>

float calculateParkingFee(int hours, int isLostTicket) {
    if (isLostTicket) {
        return 500.0;  
    }

    float fee = 0.0;

    if (hours <= 2) {
        fee = 20.0;  
    } else if (hours <= 5) {
        fee = 20.0 + (hours - 2) * 10.0;
    } else {
        fee = 20.0 + (3 * 10.0) + (hours - 5) * 50.0;
    }

    return fee;
}

int main() {
    int hours, lostTicket;
    float totalFee;

    printf("Was the parking ticket lost? (1 for Yes, 0 for No): ");
    scanf("%d", &lostTicket);

    if (lostTicket != 0 && lostTicket != 1) {
        printf("Invalid input for lost ticket status.\n");
        return 1;
    }

    if (lostTicket == 0) {
        printf("Enter number of hours parked: ");
        scanf("%d", &hours);

        if (hours < 0) {
            printf("Invalid number of hours.\n");
            return 1;
        }
    } else {
        hours = 0;  
    }

    totalFee = calculateParkingFee(hours, lostTicket);
    printf("Total Parking Fee: ₹%.2f\n", totalFee);

    return 0;
}
