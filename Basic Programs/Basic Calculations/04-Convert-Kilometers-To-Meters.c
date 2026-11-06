#include <stdio.h>

int main() {
    float km, meters;

    printf("Enter distance in kilometers: ");
    scanf("%f", &km);

    meters = km * 1000;

    printf("Meters = %.2f", meters);
    return 0;
}
