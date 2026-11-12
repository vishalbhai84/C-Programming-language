#include <stdio.h>

int main() {
    int age, id;

    printf("Enter your age: ");
    scanf("%d", &age);

    if (age >= 18) {
        printf("Do you have voter ID? (1=Yes, 0=No): ");
        scanf("%d", &id);

        if (id == 1) {
            printf("You are eligible to vote");
        } else if (id == 0) {
            printf("Voter ID is required");
        } else {
            printf("Invalid ID Input");
        }
    } else if (age >= 0) {
        printf("You are not eligible to vote");
    } else {
        printf("Invalid Age");
    }

    return 0;
}
