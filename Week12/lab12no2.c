#include <stdio.h>

#define NO_SCORE 5
#define X 10

typedef struct {
    char name[6];
    char surname[20];
    int score[NO_SCORE];
    float total;
}
Student;

void readStudentData(Student * );
void findTotalScore(Student * );
float findAverage(Student);
void findLessThanTen(Student);
void addRecord(Student * B);

void main() {
    Student std[X];
    float avg;
    int i;
    for (i = 0; i < X; i++) {
        readStudentData( & std[i]);
    }

    for (i = 0; i < X; i++) {
        findTotalScore( & std[i]);
        avg = findAverage(std[i]);
        printf("\n\tAverage score is %.2f", avg);
        findLessThanTen(std[i]);
        addRecord( & std[i]);
    }

}
void readStudentData(Student * pStd) {
    int i;
    printf("Enter student data\n");
    printf("\tName : ");
    scanf("%s", & pStd -> name);
    printf("\tSurname : ");
    scanf("%s", & pStd -> surname);
    for (i = 0; i < NO_SCORE; i++) {
        printf("\tScore %d : ", i + 1);
        scanf("%d", & pStd -> score[i]);
    }
}
void findTotalScore(Student * pStd) {
    int i;
    printf("\n\nPrint student data");
    printf("\n\t%s %s got score ", pStd -> name, pStd -> surname);
    pStd -> total = 0.0;
    for (i = 0; i < NO_SCORE; i++) {
        printf("%6d", pStd -> score[i]);
        pStd -> total += pStd -> score[i];
    }
    printf("\n\tTotal score is %.2f", pStd -> total);
}
float findAverage(Student s) {
    return (s.total / NO_SCORE);
}
void findLessThanTen(Student s) {
    int i, count = 0;
    printf("\n\tScore less than 10");
    for (i = 0; i < NO_SCORE; i++) {
        if (s.score[i] < 10) {
            printf("\n\tTest no.%d - %d", i + 1, s.score[i]);
            count++;
        }
    }
    if (count == 0)
        printf(" -> None");
}

void addRecord(Student * B) {
    int i;
    FILE *fp;
    fp = fopen("lab12/no2/std10.txt", "r");
    if (fp == NULL) {
        fclose(fp);
        fp = fopen("lab12/no2/std10.txt", "w");
        fprintf(fp, "Name : %s\nSurname : %s\nScore : ", B -> name, B -> surname);
        for (i = 0; i < 5; i++) {
            if (i != 4) {
                fprintf(fp, "%d,", B -> score[i]);
            } else {
                fprintf(fp, "%d\n", B -> score[i]);
            }
        }
        fprintf(fp, "--------------------\n");
        fclose(fp);
    } else {
        fclose(fp);
        fp = fopen("lab12/no2/std10.txt", "a");
        fprintf(fp, "Name : %s\nSurname : %s\nScore : ", B -> name, B -> surname);
        for (i = 0; i < 5; i++) {
            if (i != 4) {
                fprintf(fp, "%d,", B -> score[i]);
            } else {
                fprintf(fp, "%d\n", B -> score[i]);
            }
        }
        fprintf(fp, "--------------------\n");
        fclose(fp);
    }
}