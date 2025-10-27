#include <stdio.h>

int main() {
    int a, b, n, i, next;

    printf("Nhap so thu nhat: ");
    scanf("%d", &a);
    printf("Nhap so thu hai: ");
    scanf("%d", &b);
    printf("Nhap so phan tu cua day Fibonacci: ");
    scanf("%d", &n);

    if (n <= 0) {
        printf("So phan tu phai lon hon 0!\n");
        return 0;
    }

    printf("Day Fibonacci: ");

    if (n >= 1) printf("%d ", a);
    if (n >= 2) printf("%d ", b);

    for (i = 3; i <= n; i++) {
        next = a + b;
        printf("%d ", next);
        a = b;
        b = next;
    }

    printf("\n");
    return 0;
}