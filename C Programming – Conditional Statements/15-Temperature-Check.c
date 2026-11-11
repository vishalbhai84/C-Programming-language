#include <stdio.h>

int main() {
    float temp;

    printf("Enter temperature: ");
    scanf("%f", &temp);

    if (temp < 0) {
        printf("Freezing Temperature");
    }
    else if (temp < 15) {
        printf("Very Cold");
    }
    else if (temp < 25) {
        printf("Cold");
    }
    else if (temp < 35) {
        printf("Normal Temperature");
    }
    else if (temp < 45) {
        printf("Hot Temperature");
    }
    else {
        printf("Very Hot Temperature");
    }

    return 0;
}
