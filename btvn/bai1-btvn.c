#include <stdio.h>

int main() {
    
    int a, b, c;
    printf("Nhap vao so thu nhat: ");
    scanf("%d", &a);
    printf("Nhap vao so thu hai: ");
    scanf("%d", &b);
    printf("Nhap vao so thu ba: ");
    scanf("%d", &c);
    if (a >= b && a >= c) {
        printf("So lon nhat la: %d\n", a);
    } 
    else if (b >= a && b >= c) {
        printf("So lon nhat la: %d\n", b);
    } 
    else {
        printf("So lon nhat la: %d\n", c);
    }

   

    return 0;
}