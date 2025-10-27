#include <stdio.h>

int main() {
    int n;
    printf("Nhap mot so nguyen duong: ");
    scanf("%d", &n);

    if (n < 0) {
        printf("Khong co so chinh phuong am!\n");
        return 0;
    }

    int i, laChinhPhuong = 0;

    for (i = 1; i * i <= n; i++) {
        if (i * i == n) {
            laChinhPhuong = 1;
            break;
        }
    }

    if (laChinhPhuong == 1)
        printf("%d la so chinh phuong.\n", n);
    else
        printf("%d khong phai la so chinh phuong.\n", n);

    return 0;
}