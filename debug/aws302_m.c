#include<stdio.h>



int main(void) {
    int n, sum34, minus35, change29;
    scanf("%d", & n);

    int readn[n+1];       // ขยาย + 1 สำหรับ d)
    for (int i = 0; i < n; i++) {
        scanf("%d", & readn[i]);
    }

    // printf("a) %d %d %d %d\n", readn[0], readn[1], readn[2], readn[3]);
    printf("a)");
	for (int i=0; i<4; i++) {
		printf(" %d", readn[i]);
	}
	printf("\n");

    printf("b)");
    for (int i = 0; i < n; i++) {
        if (readn[2] < readn[i]) {
            printf(" %d", readn[i]);
        }
    }
    printf("\n");

    printf("c)");
    for (int i = 0; i < n; i++) {
        if (readn[2] < readn[i]) {
            printf(" %d", i);
        }
    }
    printf("\n");

    // sum34 = readn[2] + readn[3];
    // printf("d) ");
    // for (int i = 0; i < n; i++) {
    //     printf("%d ", readn[i]);
    // }
    // printf("%d\n", sum34);
    sum34 = readn[2] + readn[3];
    readn[n] = sum34;   // เพิ่มตัวสุดท้ายเข้า array
    printf("d)");
    for (int i = 0; i <= n; i++) { // ปรับ i < n | i <= n
        printf(" %d", readn[i]);
    }
    printf("\n"); // printf("%d\n", sum34);


    minus35 = readn[4] - readn[2];
    readn[3] = minus35;
    printf("e)");
    for (int i = 0; i <= n; i++) { // ปรับ i < n | i <= n
        printf(" %d", readn[i]);
    }
    printf("\n"); // printf("%d\n", sum34);

    printf("f) ");
    if (readn[1] < readn[5]) {
        printf("6\n");
    } else {                // ปรับเป็น else
        printf("2\n");
    }

    change29 = readn[1];
    readn[1] = readn[n];    // สลับ
    readn[n] = change29;    // สลับ
    printf("g)");
    for (int i = 0; i <= n; i++) { // ปรับ i < n | i <= n
        printf(" %d", readn[i]);
    }
    printf("\n"); // printf("%d\n", change29);




    int newread[n+1];
    int ii = 0;
    printf("h) new=[");
    for (int i = 0; i <= n; i++) {      // ปรับ < | <=
        if (readn[i] % 2 == 0) {
            newread[ii] = readn[i];
            ii++;
        }
    }
    for (int i = 0; i < ii; i++) {
        if (i)
            printf(" ");
        printf("%d", newread[i]);
    }
    printf("]\n");

}