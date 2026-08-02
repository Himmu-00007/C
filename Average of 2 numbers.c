#include <stdio.h>

int main() {
    int num1, num2;
    float average;

    printf("Enter first whole number: ");
    scanf("%d", &num1);

    printf("Enter second whole number: ");
    scanf("%d", &num2);

    int sum = num1 + num2;
    average = sum / 2.0;

    printf("Sum = %d\n", sum);
    printf("Average = %.2f\n", average);

    return 0;
}
