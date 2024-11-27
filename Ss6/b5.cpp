#include <stdio.h>

int main() {
    int year, month, days;
    printf("Nhap nam:");
    scanf("%d", &year);
    printf("Nhap thang:");
    scanf("%d", &month);

    if (month < 1 || month > 12) {
        printf("Thang khong hop le\n");
        return 0;
    }
    if (month == 2) {
        days = (year % 4 == 0 && (year % 100 != 0 || year % 400 == 0)) ? 29 : 28;
    } else {
        days = (month == 4 || month == 6 || month == 9 || month == 11) ? 30 : 31;
    }
    printf("Thang %d nam %d co %d ngay.\n", month, year, days);
    
    return 0;
}

