#include <stdio.h>
int main() {
    int num1, num2, num3, max;
    printf("Input the first integer: ");
    scanf("%d", &num1);
    printf("Input the second integer: ");
    scanf("%d", &num2);
    printf("Input the third integer: ");
    scanf("%d", &num3); 
    max = num1; 
    if(num2 > max) {
        max = num2; 
    }
    if(num3 > max) {
        max = num3; 
    }
    printf("The maximum of the three numbers is: %d\n", max);
    return 0;
}
