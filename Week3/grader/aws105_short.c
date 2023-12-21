#include <stdio.h>

int main(void) {
  int num, temp, step;
  scanf("%d", &num);

  step = 100;
  for (int i=3; i>0; i--) {
    temp = num / step;
    switch (temp) {
      case 0:
        printf("Zero");
        break;
      case 1:
        printf("One");
        break;
      case 2:
        printf("Two");
        break;
      case 3:
        printf("Three");
        break;
      case 4:
        printf("Four");
        break;
      case 5:
        printf("Five");
        break;
      case 6:
        printf("Six");
        break;
      case 7:
        printf("Seven");
        break;
      case 8:
        printf("Eight");
        break;
      case 9:
        printf("Nine");
        break;
      default:
        break;
    }
    num -= temp * step;
    step /= 10;
    if (num)
      printf(" ");
  }
}