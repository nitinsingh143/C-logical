#include <stdio.h>
int main() {
    int num1, num2;

    // Read two integers from the user
    printf("Enter two integers: ");
    scanf("%d %d", &num1, &num2);

    // Check if the numbers are multiples of each other
    if (num1 % num2 == 0) {
        printf("Multiplied");
    } else if (num2 % num1 == 0) {
        printf("Multiplied");
    } else {
        printf("Not Multiplied");
    }

    return 0;
}
