#include <stdio.h>
int main() {
    float a, b, c;
    printf("Enter three side lengths: ");
    scanf("%f %f %f", &a, &b, &c);
    if (a + b > c && a + c > b && b + c > a) {
        float perimeter = a + b + c;
        printf("The values can form a triangle.\n");
        printf("Perimeter of the triangle: %.2f\n", perimeter);
    } else {
        printf("The values cannot form a triangle.\n");
    }

    return 0;
}
