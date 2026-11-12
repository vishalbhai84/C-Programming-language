#include <stdio.h>
#include <string.h>

int main() {
    char username[30];
    char password[30];

    printf("Enter username: ");
    scanf("%29s", username);

    if (strcmp(username, "admin") == 0) {
        printf("Enter password: ");
        scanf("%29s", password);

        if (strcmp(password, "12345") == 0) {
            printf("Login Successful");
        } else {
            printf("Incorrect Password");
        }
    } else {
        printf("Incorrect Username");
    }

    return 0;
}
