#include <stdio.h>
int main() {
    float subject1, subject2, subject3, subject4, subject5;
    float total, average, percentage;
    printf("Enter the marks of Subject 1: ");
    scanf("%f", &subject1);
    printf("Enter the marks of Subject 2: ");
    scanf("%f", &subject2);
    printf("Enter the marks of Subject 3: ");
    scanf("%f", &subject3);
    printf("Enter the marks of Subject 4: ");
    scanf("%f", &subject4);
    printf("Enter the marks of Subject 5: ");
    scanf("%f", &subject5);
    total = subject1 + subject2 + subject3 + subject4 + subject5;
    average = total / 5;
    percentage = (total / 500) * 100;
    printf("Total marks = %.2f\n", total);
    printf("Average marks = %.2f\n", average);
    printf("Percentage = %.2f%%\n", percentage);
    return 0;
}
