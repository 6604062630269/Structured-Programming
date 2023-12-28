#include <stdio.h>

#include <stdio.h>

int main(void) {
    int score;
    char grade;
    scanf("%d", &score);
    if (score > 69) {
        if  (score < 75) {
            grade = 'C';
        } else if (score < 85) {
            grade = 'B';
        } else {
            grade = 'A';
        }
    } else if (score > 54) {
        grade = 'D';
    } else {
        grade = 'F';
    }

    printf("Grade : %c\n", grade);
    if (score < 85) {
        printf("Need %d Score For Grade 'A'\n", 85-score);
    }

    switch (grade) {
        case 'A': printf("Excellent\n"); break;
        case 'B': printf("Good\n"); break;
        case 'C': printf("So So\n"); break;
        case 'D': printf("Fails\n"); break;
        case 'F': printf("Get lost\n"); break;
        default : printf("Invalid\n");
    }

    return 0;
}
