#include <stdio.h>
#include <string.h>

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
    char name[16], surname[20];
    scanf("%s", directory[index_].name);
    scanf("%s", directory[index_].surname);

    for (int i=0; i<=3; i++) {
      scanf("%d", &directory[index_].score[i]);
    }
    scanf("%d\n", &directory[index_].score[4]);
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
