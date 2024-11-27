#include <stdio.h>
#include <math.h>

int main() {
    int a, b, c;
    int delta;
    int x1, x2;
    printf("Nhap a, b, c: \n");
    scanf("%d %d %d", &a, &b, &c);

    if (a == 0) {
        if (b == 0) {
            if (c == 0) {
                printf("Phuong trinh vo so nghiem\n");
            } else {
                printf("Phuong trinh vo nghiem\n");
            }
        } else {
            x1 = -c / b;
            printf("Phuong trinh co nghiem duy nhat: x = %d\n", x1);
        }
    } else {
        delta = b * b - 4 * a * c;
        if (delta < 0) {
            printf("Phuong trinh vo nghiem\n");
        } else if (delta == 0) {
            x1 = -b / (2 * a);
            printf("Phuong trinh co nghiem kep: x = %d\n", x1);
        } else {
            x1 = (-b + (int)sqrt(delta)) / (2 * a);
            x2 = (-b - (int)sqrt(delta)) / (2 * a);
            printf("Phuong trinh co hai nghiem phan biet:\n");
            printf("x1 = %d\n", x1);
            printf("x2 = %d\n", x2);
        }
    }

    return 0;
}

