#include <stdio.h>

int main() {
    int a[10];     
    int i, x, check = 0;  

    printf("Nhap 10 so nguyen: ");
    for (i = 0; i < 10; i++) {
        scanf("%d", &a[i]);
    }

    printf("Nhap so can tim: ");
    scanf("%d", &x);

    for (i = 0; i < 10; i++) {
        if (a[i] == x) {
            printf("Tim thay %d tai chi so: %d\n", x, i);
            check = 1;   
            break;       
        }
    }

    if (check == 0) {
        printf("Khong tim thay %d trong mang\n", x);
    }

    return 0;
}