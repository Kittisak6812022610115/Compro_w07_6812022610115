//กรณีใช้ Switch case
#include <stdio.h>

int main() {
    int level;

    printf("Enter membership level (1-4): ");
    scanf("%d", &level);

    switch (level) {
        case 1:
            printf("Silver Member: 5%% discount\n");
            break;
        case 2:
            printf("Gold Member: 10%% discount + Reward points\n");
            break;
        case 3:
            printf("Platinum Member: 15%% discount + Reward points + Birthday gift\n");
            break;
        case 4:
            printf("Diamond Member: All benefits + VIP events\n");
            break;
        default:
            printf("Invalid membership level\n");
    }

    return 0;
}

// การใช้ if else if else
// จะเหมาะกับเงื่อนไขที่มีช่วงของค่า (Range of values)
// เช่น การให้ส่วนลดตามระดับสมาชิก   
// ส่วน switch case จะเหมาะกับเงื่อนไขที่มีค่าคงที่ (Constant values)
// เช่น การเลือกเมนูตามหมายเลข หรือการแสดงข้อความตามระดับที่กำหนดไว้  
// ในกรณีที่มีเงื่อนไขซับซ้อนหรือหลายเงื่อนไขที่ต้องตรวจสอบ
// การใช้ if else if else จะทำให้โค้ดอ่านง่ายกว่า switch case
// แต่ถ้าเงื่อนไขมีค่าคงที่และไม่ซับซ้อน switch case จะทำให้โค้ดดูสะอาดตาและเข้าใจง่ายกว่า
// สรุปคือ การเลือกใช้ if else if else หรือ switch case ขึ้นอยู่กับลักษณะของเงื่อนไขที่ต้องการตรวจสอบ
// และความชอบส่วนตัวของผู้เขียนโค้ด