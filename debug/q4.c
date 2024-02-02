#include <stdio.h>

/*
    จากโจทย์
    1 < n < 1000
    เลขยกกำลังไม่น่าจะเป็นทศนิยม
    0 < temp < 999999

    เลขหลงตัวเอง
    1634
    1 6 3 4
    มีเลข4ตัว 4คือเลขยกกำลัง
    1^4 + 6^4 + 3^4 + 3^4 = 1634 True

    ถ้าจารย์ให้ใช้ math.h ก็ง่ายชึ้นเยอะ แต่ถ้าไม่ให้ก็ loop pow เอง
*/

int pow_(int x, int n) {
    int sum = 1;           // เลขยกกำลังตัอง >= 0
    for (int i = 0; i < n; i++) {
        sum *= x;
    }
    return sum;
}


int main(void) {;
    int n, temp, count, clone, sum;
    scanf("%d", &n);

    for (int i = 0; i < n; i++) {
        scanf("%d", &temp);
        sum = 0;
        count = sizeof(temp);          // เลขสำหรับยกกำลัง
        clone = temp;
        while (clone) {     // Loop until clone = 0
            sum += pow_(clone%10, count);
            clone /= 10;    // 1634 --> 163;   163 --> 16;   16 --> 1;   1 --> 0;
        }
        if (temp == sum) {
            printf("YES\n");
        } else {
            printf("NO\n");
        }
    }

    return 0;
}