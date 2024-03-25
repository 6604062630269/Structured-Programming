#include <stdio.h>
#include <string.h>
#include <ctype.h>

typedef struct {
  char loginname[64];
  char password[64];
} account;

typedef struct {
  char stdID[17];
  char nameSurname[25];
  account stdACC;
} hoststd;


int checkLogin(hoststd cs[5], char *login, char *password) {
    for (int i=0; i<5; i++) {
        if (!strcmp(cs[i].stdACC.loginname, login) && !strcmp(cs[i].stdACC.password, password)) {
            return i;
        }
    }
    return -1;
}

int main() {
    char login[6], password[6];
    printf("Enter login : ");
    gets(login);
    printf("Enter password : ");
    gets(password);

    hoststd cs[5] = {
        {"66-040626-2686-9","MR.A","user1", "pass1"},
        {"66-040626-3686-9","MR.B","user2", "pass2"},
        {"66-040626-4686-9","MR.C","user3", "pass3"},
        {"66-040626-5686-9","MR.D","user4", "pass4"},
        {"66-040626-6686-9","MR.E","user5", "pass5"},
    };

    int index = checkLogin(cs, login, password);
    if (index != -1) {
        printf("Welcome\n");
        printf("ID : %s\n", cs[index].stdID);
        printf("User : %s\n", cs[index].nameSurname);
    } else {
        printf("Incorrect login or password\n");
    }

    return 0;
}
