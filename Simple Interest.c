#include <stdio.h>

int main() {
    float principle, time, rate, SI;

    printf("Enter principle amount: ");
    scanf("%f", &principle);

    printf("Enter time (in years): ");
    scanf("%f", &time);

    printf("Enter rate of interest: ");
    scanf("%f", &rate);

    SI = (principle * time * rate) / 100;

    printf("Simple Interest = %.2f\n", SI);

    return 0;
}