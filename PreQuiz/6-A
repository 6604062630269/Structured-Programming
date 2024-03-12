#include <stdio.h>
#include <string.h>
#include <ctype.h>

typedef struct {
  char name[64];
  char phoneNumber[32];
} phoneBook;

phoneBook directory[50];

void addRecord(char *someone, char *pnumber);
char *searchPhone(char *name);

int index_ = 0;

int main() {
  int n;
  scanf("%d\n", &n);

  for (int i=0; i<n; i++) {
    char text[100];
    gets(text);
    char *name = strtok(text, " ");
    char *phone = strtok(NULL, " ");
    addRecord(name, phone);
  }

  scanf("%d\n", &n);
  for (int i=0; i<n; i++) {
    char name[65];
    gets(name);
    printf("%s\n", searchPhone(name));
  }

  return 0;
}

void addRecord(char *someone, char *pnumber) {
  strcpy(directory[index_].name, someone);
  strcpy(directory[index_].phoneNumber, pnumber);
  index_++;
}
char *searchPhone(char *name) {
  for (int i=0; i<index_; i++) {
    if (!strcmp(directory[i].name, name)) {
      return directory[i].phoneNumber;
    }
  }
  return "N/A";
}
