#include <stdio.h>

int main() {
    int numbers[5];
    int sum = 0;

    // Read 5 numbers from the user
    printf("Enter 5 integers:\n");
    for (int i = 0; i < 5; i++) {
        scanf("%d", &numbers[i]);

        // Check if the number is odd
        if (numbers[i] % 2 != 0) {
            sum += numbers[i]; // Add odd numbers to sum
        }
    }

    // Display the result
    printf("Sum of all odd values: %d\n", sum);

    return 0;
}
