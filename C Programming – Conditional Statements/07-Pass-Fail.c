#include <stdio.h>

int main() {
    int marks;

    printf("Enter marks: ");
    scanf("%d", &marks);

    if (marks >= 33 && marks <= 100) {
        printf("Pass");
    } else if (marks >= 0 && marks < 33) {
        printf("Fail");
    } else {
        printf("Invalid Marks");
    }

    return 0;
}
