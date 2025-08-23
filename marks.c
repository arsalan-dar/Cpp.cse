#include <stdio.h>

int main() {
    float marks[5], total = 0, average, percentage;
    int i;

    
    printf("Enter marks for 5 subjects:\n");
    for(i = 0; i < 5; i++) {
        printf("Subject %d: ", i + 1);
        scanf("%f", &marks[i]);

        if (marks[i] < 0 || marks[i] > 100) {
            printf("Invalid marks! Please enter marks between 0 and 100.\n");
            return 1;
        }

        total += marks[i];
    }

    average = total / 5;
    percentage = (total / 500) * 100;

    
    printf("\nTotal Marks = %.2f\n", total);
    printf("Average = %.2f\n", average);
    printf("Percentage = %.2f%%\n", percentage);

    
    if (percentage >= 90)
        printf("Grade: A\n");
    else if (percentage >= 80)
        printf("Grade: B\n");
    else if (percentage >= 70)
        printf("Grade: C\n");
    else if (percentage >= 60)
        printf("Grade: D\n");
    else if (percentage >= 40)
        printf("Grade: E\n");
    else
        printf("Grade: F (Fail)\n");

    return 0;
}
