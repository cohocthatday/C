#include <stdio.h>

int sumToN(int n){
    int sum = 0;
    for (int i = 1; i <= n; i++){
        sum += i;
    }
    return sum;
}

int main() {
    int n;
    printf("nhap vao 1 so nguyen: ");
    scanf("%d", &n);

    int result = sumToN(n);
    printf("tong cac so tu 1 den %d la: %d\n", n, result);

    return 0;
}