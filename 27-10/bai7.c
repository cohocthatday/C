#include <stdio.h>

int main() {
    int h, i, j;

    printf("Nhap vao chieu cao tam giac can (>= 3): ");
    scanf("%d", &h);

    if (h < 3) {
        printf("Chieu cao tam giac phai lon hon hoac bang 3!\n");
        return 0;
    }

    for (i = 1; i <= h; i++) {
        for (j = i; j < h; j++) {
            printf(" ");
        }

        for (j = 1; j <= 2 * i - 1; j++) {
            if (j == 1 || j == 2 * i - 1 || i == h)
                printf("*");
            else
                printf(" ");
        }

        printf("\n");
    }

    return 0;
}