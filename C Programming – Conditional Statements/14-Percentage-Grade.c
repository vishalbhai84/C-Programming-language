#include <stdio.h>

int main() {
    float obtained, total, percentage;

    printf("Enter obtained marks: ");
    scanf("%f", &obtained);

    printf("Enter total marks: ");
    scanf("%f", &total);

    if (total <= 0 || obtained < 0 || obtained > total) {
        printf("Invalid Marks");
    }
    else {
        percentage = (obtained / total) * 100;

        printf("Percentage = %.2f%%\n", percentage);

        if (percentage >= 90) {
            printf("Grade A+");
        }
        else if (percentage >= 80) {
            printf("Grade A");
        }
        else if (percentage >= 70) {
            printf("Grade B");
        }
        else if (percentage >= 60) {
            printf("Grade C");
        }
        else if (percentage >= 33) {
            printf("Grade D");
        }
        else {
            printf("Fail");
        }
    }

    return 0;
}
