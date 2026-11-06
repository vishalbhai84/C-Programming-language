#include <stdio.h>

int main() {
    float obtained, total, percentage;

    printf("Enter obtained and total marks: ");
    scanf("%f %f", &obtained, &total);

    if (total > 0 && obtained >= 0 && obtained <= total) {
        percentage = (obtained / total) * 100;
        printf("Percentage = %.2f%%", percentage);
    } else {
        printf("Invalid marks");
    }

    return 0;
}
