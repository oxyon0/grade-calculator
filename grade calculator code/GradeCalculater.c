#include <stdio.h>

int main() {
    int n, i;
    float marks[10], total = 0, percentage;
    char grade;

    printf("Enter the number of subjects (max 10): ");
    scanf("%d", &n);
    printf("Enter the marks for %d subjects (out of 100):\n", n);
    for (i = 0; i < n; i++) {
        printf("Subject %d: ", i + 1);
        scanf("%f", &marks[i]);
        total += marks[i];
    }
    percentage = total / n;
    if (percentage >= 90) {
        grade = 'A';
    } else if (percentage >= 80) {
        grade = 'B';
    } else if (percentage >= 70) {
        grade = 'C';
    } else if (percentage >= 60) {
        grade = 'D';
    } else {
        grade = 'F';
    }
    printf("\n----- Result -----\n");
    printf("Total Marks: %.2f\n", total);
    printf("percentage Marks: %.2f\n", percentage);
    printf("Grade: %c\n", grade);

    return 0;
}
