#include <stdio.h>

int main() {
    int n, i, tong = 0;

    printf("Nhap mot so nguyen duong: ");
    scanf("%d", &n);

    if (n <= 0) {
        printf("So hoan hao chi dinh nghia cho so nguyen duong!\n");
        return 0;
    }

    for (i = 1; i < n; i++) {
        if (n % i == 0) {
            tong += i;
        }
    }

    if (tong == n)
        printf("%d la so hoan hao.\n", n);
    else
        printf("%d khong phai la so hoan hao.\n", n);

    return 0;
}