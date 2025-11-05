#include <stdio.h>

int main() {
    int n, i, j, laNguyenTo, tong = 0;

    printf("Nhap mot so nguyen duong n: ");
    scanf("%d", &n);

    if (n < 2) {
        printf("Khong co so nguyen to nao tu 2 den %d.\n", n);
        return 0;
    }

    for (i = 2; i <= n; i++) {
        laNguyenTo = 1; 

        for (j = 2; j * j <= i; j++) {
            if (i % j == 0) {
                laNguyenTo = 0; 
                break;
            }
        }

        if (laNguyenTo == 1)
            tong += i;
    }

    printf("Tong cac so nguyen to tu 2 den %d la: %d\n", n, tong);

    return 0;
}