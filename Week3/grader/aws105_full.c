#include <stdio.h>

int main(void) {
  int num, n_1, n_2, n_3;
  scanf("%d", &num);  // 456


  n_3 = num % 10;     // หลักหน่วย (6)
  num = num / 10;     // 45
  n_2 = num % 10;     // หลักสิบ (5)
  n_1 = num / 10;     // หลักร้อย (4)

  switch (n_1) {
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

  printf(" ");

  switch (n_2) {
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

  printf(" ");

  switch (n_3) {
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
}