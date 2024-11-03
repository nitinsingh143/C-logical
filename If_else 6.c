#include <stdio.h>

int main() {
    int p, q, r, s;

    // Accept input from the user
    printf("Enter four integers (p, q, r, s): ");
    scanf("%d %d %d %d", &p, &q, &r, &s);

    // Check the conditions
    if (p % 2 == 0 && q > r && s > p && (r + s) > (p + q)) {
        printf("Correct values\n");
    } else {
        printf("Wrong values\n");
    }

    return 0;
}
