#include <stdio.h>

int main() {
    int a[5];  
    int i;

    printf("Nhap 5 so nguyen: ");
    for (i = 0; i < 5; i++) {
        scanf("%d", &a[i]);
    }

    printf("Mang dao nguoc: ");
    for (i = 4; i >= 0; i--) {
        printf("%d ", a[i]);
    }

    return 0;
}