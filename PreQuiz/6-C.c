#include <stdio.h>
#include <string.h>
#include <ctype.h>
#include <stdlib.h>

typedef struct {
  char name[16];
  char surname[20];
  int score[5];
  float stotal;
} Student;


void readStudentData(Student *);
void printMaxScore(Student, int);

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

    char score_c[3], *score_temp;
    char text2[21];
    gets(text2);
    score_temp = strtok(text2, " ");
    strcpy(score_c, score_temp);
    directory[index_].score[0] = atoi(score_c+'\0');
    
    for (int i=1; i<=4; i++) {
      score_temp = strtok(NULL, " ");
      strcpy(score_c, score_temp);
      directory[index_].score[i] = atoi(score_c+'\0');
    }
  }

  readStudentData(directory);
  return 0;
}

void printScore2(Student data, int pos) {
  printf("%s %d\n", data.name, data.score[pos]);
}

void readStudentData(Student *list_data) {
  int n, temp, Stu_Max;
  scanf("%d\n", &n);
  for (int i=0; i<n; i++) {
    scanf("%d", &temp);
    temp--;
    int max = -1;
    for (int ii=0; ii<index_; ii++) {
      if (max < list_data[ii].score[temp]) {
        max = list_data[ii].score[temp];
        Stu_Max = ii;
      }
    }
    printScore2(list_data[Stu_Max], temp);
  }
}
