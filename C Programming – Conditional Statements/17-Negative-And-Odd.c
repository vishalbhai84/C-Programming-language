#include <stdio.h>

int main() {
    int num;

    printf("Enter a number: ");
    scanf("%d", &num);

    if (num < 0) {
        if (num % 2 != 0) {
            printf("Negative Odd Number");
        } else {
            printf("Negative Even Number");
        }
    } else {
        printf("Number is not Negative");
    }

    return 0;
}
