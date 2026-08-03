#include <stdio.h>
#include <math.h>

int main() {
    float initial_amount, time, depreciation_rate, amount_of_depreciation;

    printf("Enter initial amount: ");
    scanf("%f", &initial_amount);

    printf("Enter time (in years): ");
    scanf("%f", &time);

    printf("Enter depreciation rate (in %%): ");
    scanf("%f", &depreciation_rate);

    amount_of_depreciation = initial_amount * pow(1 - depreciation_rate / 100, time);

    printf("Amount of Depreciation = %.2f\n", amount_of_depreciation);

    return 0;
}