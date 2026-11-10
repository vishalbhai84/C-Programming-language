#include <stdio.h>

int main() {
    int age;

    printf("Enter your age: ");
    scanf("%d", &age);

    if (age >= 18) {
        printf("Eligible for Voting");
    } else if (age >= 0) {
        printf("Not Eligible for Voting");
    } else {
        printf("Invalid Age");
    }

    return 0;
}
