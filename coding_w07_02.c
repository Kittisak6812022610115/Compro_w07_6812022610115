#include <stdio.h>

int main() {
    int x, y;

    // รับค่าจากผู้ใช้
    printf("กรอกค่า x: "); // รับค่าตัวแปร x
    scanf("%d", &x);
    printf("กรอกค่า y: "); // รับค่าตัวแปร y
    scanf("%d", &y);

    // เปรียบเทียบค่า
    if (x > y) {
        printf("x มากกว่า y\n"); // แสดงผลถ้า x มากกว่า y
    } else if (x < y) {
        printf("x น้อยกว่า y\n"); // แสดงผลถ้า x น้อยกว่า y
    } else {
        printf("x เท่ากับ y\n"); // แสดงผลถ้า x เท่ากับ y
    }

    return 0;
}