#include <stdio.h>

int main() {
    int n, i, j;

    printf("Nhap vao do dai canh hinh vuong (>= 3): ");
    scanf("%d", &n);

    if (n < 3) {
        printf("Canh hinh vuong phai lon hon hoac bang 3!\n");
        return 0;
    }

    for (i = 1; i <= n; i++) {
        for (j = 1; j <= n; j++) {
            if (i == 1 || i == n || j == 1 || j == n)
                printf("* ");
            else
                printf("  ");
        }
        printf("\n");
    }

    return 0;
}