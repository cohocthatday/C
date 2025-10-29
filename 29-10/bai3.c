#include <stdio.h>

int main() {
    int matrix[3][3];  
    int i, j, sum = 0;

    printf("Nhap cac phan tu cua ma tran 3x3:\n");
    for (i = 0; i < 3; i++) {
        for (j = 0; j < 3; j++) {
            printf("matrix[%d][%d] = ", i, j);
            scanf("%d", &matrix[i][j]);
        }
    }

    printf("\nMa tran vua nhap:\n");
    for (i = 0; i < 3; i++) {
        for (j = 0; j < 3; j++) {
            printf("%4d", matrix[i][j]);  
        }
        printf("\n");
    }

    for (i = 0; i < 3; i++) {
        sum += matrix[i][i];
    }

    printf("\nTong cac phan tu tren duong cheo chinh = %d\n", sum);

    return 0;
}