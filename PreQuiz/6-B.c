#include <stdio.h>
#include <string.h>
#include <ctype.h>

typedef struct {
  char name[16];
  char surname[20];
  char score[5];
  float stotal;
} Student;


void readStudentData(Student *);
void printScore2(Student);

int index_;

int main() {
  Student directory[50];
  
  int n;
  scanf("%d\n", &n);

  for (index_=0; index_<n; index_++) {
    char text[37];
    gets(text);
    char *name = strtok(text, " ");
    char *surname = strtok(NULL, " ");
    strcpy(directory[index_].name, name);
    strcpy(directory[index_].surname, surname);


    char text2[21];
    gets(text2);
    char *score = strtok(text2, " ");
    score = strtok(NULL, " ");
    strcpy(directory[index_].score, score);
  }

  readStudentData(directory);
  return 0;
}

void printScore2(Student data) {
  printf("%s %s\n", data.name, data.score);
}

void readStudentData(Student *list_data) {
  for (int i=0; i<index_; i++) {
    printScore2(list_data[i]);
  }
}
