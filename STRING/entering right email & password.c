//-------------2.WAP to create login mechanism by entering right email & password.--------//


#include <stdio.h>
#include <string.h>

int main() {
    char email[50];
    char password[50];

  
    char user_email[50] = "viratpatel5880@gamil.com";
    char user_password[50] = "Virat5880";

    
    printf("Enter email: ");
    scanf("%s", email);
    printf("Enter password: ");
    scanf("%s", password);


    if (strcmp(email, user_email) == 0 && strcmp(password, user_password) == 0) {
        printf("Login successful\n");
    } else {
        printf("Incorrect email or password\n");
    }

    return 0;
}

