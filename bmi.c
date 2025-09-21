#include <stdio.h>

int main() {
    float weight, height, bmi;

    // Input
    printf("Enter your weight in kilograms: ");
    scanf("%f", &weight);

    printf("Enter your height in meters: ");
    scanf("%f", &height);

    // Validate input
    if (weight <= 0 || height <= 0) {
        printf("Invalid input! Weight and height must be positive values.\n");
        return 1;
    }

    // Calculate BMI
    bmi = weight / (height * height);

    // Output BMI value
    printf("Your BMI is: %.2f\n", bmi);

    // Classify BMI
    if (bmi < 18.5) {
        printf("Category: Underweight\n");
    } else if (bmi >= 18.5 && bmi < 25.0) {
        printf("Category: Normal weight\n");
    } else if (bmi >= 25.0 && bmi < 30.0) {
        printf("Category: Overweight\n");
    } else {
        printf("Category: Obese\n");
    }

    return 0;
}
