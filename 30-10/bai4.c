#include <stdio.h>

void findMaxInArray(int arr[], int size, int *min, int *max) {
    *min = arr[0];
    *max = arr[0];

    for (int i = 1; i < size; i++) {
        if (arr[i] < *min)
            *min = arr[i];
        if (arr[i] > *max)
            *max = arr[i];
    }
}

int main() {
    int n;
    printf("Nhap so luong phan tu cua mang: ");
    scanf("%d", &n);

    int arr[n];
    for (int i = 0; i < n; i++) {
        printf("Nhap phan tu thu %d: ", i + 1);
        scanf("%d", &arr[i]);
    }

    int minValue, maxValue;

    findMaxInArray(arr, n, &minValue, &maxValue);

    printf("\nGia tri nho nhat trong mang la: %d", minValue);
    printf("\nGia tri lon nhat trong mang la: %d\n", maxValue);

    return 0;
}
