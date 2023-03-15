#include <stdio.h>
#include <string.h>

int main() {
    char password[50];
    int len;

    printf("Enter a password: ");
    scanf("%s", password);
    len = strlen(password);

    if (len >= 6) {
        printf("Valid password\n");
    } else {
        printf("Invalid password: password must be at least 6 characters\n");
    }

    return 0;
}

