#include <stdio.h>

    int main() {
    int num1, num2, num3, greatest;

    printf("Enter three integers: ");
    scanf("%d %d %d", &num1, &num2, &num3);

    greatest = num1;
    if (num2 > greatest)
        greatest = num2;
    if (num3 > greatest)
        greatest = num3;

    printf("Greatest integer = %d\n", greatest);

    return 0;
}