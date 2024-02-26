#include <stdio.h>
#include <string.h>

int checkLogin(char *login, char *password) {
    char login_c[5][64] = {"user1", "user2", "user3", "user4"};
    char password_c[5][64] = {"pass1", "pass2", "pass3", "pass4"};

    for (int i=0; i<5; i++) {
        if (!strcmp(login_c[i], login) && !strcmp(password_c[i], password)) {
            return 1;
        }
    }
    return 0;
}

int main() {
    char login[5], password[5];
    printf("Enter login : ");
    gets(login);
    printf("Enter password : ");
    gets(password);

    if (checkLogin(login, password) == 1) {
        printf("Welcome\n");
    } else {
        printf("Incorrect login or password\n");
    }
}
