#include <stdio.h>

int main() {
    int a, sum = 0;

    for (int i = 0; i < 5; i++) {
        printf("Nhap so nguyen: ");
        scanf("%d", &a);
        if (a % 2 != 0) {
            sum += a;
        }
    }

    printf("Tong cac so le: %d\n", sum);
    return 0;
}

