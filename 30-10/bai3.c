#include <stdio.h>

void swap(int *a, int *b) {
    int temp = *a; 
    *a = *b;       
    *b = temp;      
}

int main() {
    int x, y;

    printf("Nhap gia tri cua x: ");
    scanf("%d", &x);
    printf("Nhap gia tri cua y: ");
    scanf("%d", &y);

    printf("Truoc khi hoan doi: x = %d, y = %d\n", x, y);

    swap(&x, &y); 

    printf("Sau khi hoan doi: x = %d, y = %d\n", x, y);

    return 0;
}
