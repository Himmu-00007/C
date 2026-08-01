#include <stdio.h>
#include <math.h>

int main() {
    float principle, rate, time, amount;

    printf("Enter principle amount: ");
    scanf("%f", &principle);

    printf("Enter annual growth rate (in %%): ");
    scanf("%f", &rate);

    printf("Enter time (in years): ");
    scanf("%f", &time);

    amount = principle * pow(1 + rate / 100, time);

    printf("Compound Annual Growth Amount = %.2f\n", amount);

    return 0;
}