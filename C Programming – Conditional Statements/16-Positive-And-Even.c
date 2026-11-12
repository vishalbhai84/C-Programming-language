#include <stdio.h>

int main() {
    int num;

    printf("Enter a number: ");
    scanf("%d", &num);

    if (num > 0) {
        if (num % 2 == 0) {
            printf("Positive Even Number");
        } else {
            printf("Positive Odd Number");
        }
    } else {
        printf("Number is not Positive");
    }

    return 0;
}
