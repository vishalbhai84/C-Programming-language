#include <stdio.h>

int main() {
    int math, science, english;

    printf("Enter Mathematics marks: ");
    scanf("%d", &math);

    printf("Enter Science marks: ");
    scanf("%d", &science);

    printf("Enter English marks: ");
    scanf("%d", &english);

    if (math >= 0 && math <= 100) {
        if (science >= 0 && science <= 100) {
            if (english >= 0 && english <= 100) {
                if (math >= 50 && science >= 50 && english >= 50) {
                    printf("Eligible for Admission");
                } else {
                    printf("Not Eligible for Admission");
                }
            } else {
                printf("Invalid English Marks");
            }
        } else {
            printf("Invalid Science Marks");
        }
    } else {
        printf("Invalid Mathematics Marks");
    }

    return 0;
}
