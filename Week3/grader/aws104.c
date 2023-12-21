#include <stdio.h>

int main(void) {
  int state;
  float grade;
  char help;
  scanf("%d %f %c", &state, &grade, &help);

  if (state >= 2 && grade >= 2.5 && help == 'Y') {
    printf("approved\n");
  } else if (grade >= 3) {
    printf("approved\n");
  } else {
    printf("not approved\n");
    if (grade < 2.5)
      printf("grade < 2.50");
    if (state < 2)
      printf("year < 2");
    if (help == 'N')
      printf("no help");
  }
}
