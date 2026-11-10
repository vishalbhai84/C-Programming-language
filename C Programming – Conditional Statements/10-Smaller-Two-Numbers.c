#include <stdio.h>

int main() {
    int a, b;

    printf("Enter two numbers: ");
    scanf("%d %d", &a, &b);

    if (a < b) {
        printf("%d is Smaller", a);
    } else if (b < a) {
        printf("%d is Smaller", b);
    } else {
        printf("Both are Equal");
    }

    return 0;
}
