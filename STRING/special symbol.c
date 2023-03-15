#include <stdio.h>
#include <string.h>


int main() {
    char password[50];
    int i, len;
    int letter = 0, digit = 0, special = 0;

    printf("Enter a password: ");
    scanf("%s", password);
    len = strlen(password);

    for (i = 0; i < len; i++) {
        if (isalpha(password[i])) {
            letter = 1;
        } else if (isdigit(password[i])) {
            digit = 1;
        } else {
            special = 1;
        }
    }

    if (letter && digit && special) {
        printf("Valid password\n");
    } else {
        printf("Invalid password\n");
    }

    return 0;
}

