#include <stdio.h>

int main(void) {
    int sc, sum, temp;
    scanf("%f", &sc);
    sum = 0;
    for (sc; sc>=0; /*คำสั้งตรงนี้จะ ทำทุกครั้งหลัง loop เสร็จ (ผมย้ายไปบรรทัดที่ 9)*/) {
        sum = sum + sc;
        scanf("%f", &sc);  // นำไปเช็คเงื่อนไข loop ถ้า input < 0 จะออก loop
    }
    return 0;
}