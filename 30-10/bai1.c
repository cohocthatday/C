#include <stdio.h>

int sumToN(int n) {
    int sum = 0;
    for (int i = 1; i <= n; i++) {
        sum += i;
    }
    return sum;
}

int main() {
    int n;
    printf("Nhap mot so nguyen n: ");
    scanf("%d", &n);

    int result = sumToN(n);
    printf("Tong cac so tu 1 den %d la: %d\n", n, result);

    return 0;
}
