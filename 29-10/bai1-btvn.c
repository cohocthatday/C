#include <stdio.h>

int main() {
    int a[10];   
    int x;      
    int dem = 0; 

    printf("Nhap 10 so nguyen:\n");
    for (int i = 0; i < 10; i++) {
        scanf("%d", &a[i]);
    }

    printf("Nhap so x: ");
    scanf("%d", &x);

    for (int i = 0; i < 10; i++) {
        if (a[i] == x) {
            dem++;
        }
    }

    printf("So %d xuat hien %d lan trong mang.\n", x, dem);

    return 0;
}