#include <stdio.h>
#include <stdlib.h> 

void nhapMang(float *arr, int n);
void hienThiMang(float *arr, int n);
float tinhDiemTrungBinh(float *arr, int n);
float timDiemCaoNhat(float *arr, int n);
int demSoDiemDat(float *arr, int n, float diemChuan);

int main() {
    int n, choice;
    float *arr = NULL;
    float diemChuan;

    printf("Nhap so luong diem: ");
    scanf("%d", &n);

    arr = (float *)malloc(n * sizeof(float));
    if (arr == NULL) {
        printf("Khong du bo nho!\n");
        return 1;
    }

    do {
        printf("\n==== menu ===\n");
        printf("1. nhap mang diem\n");
        printf("2. nien thi mang diem\n");
        printf("3. tinh diem trung binh\n");
        printf("4. tim diem cao nhat\n");
        printf("5. dem so diem dat\n");
        printf("6. thoat\n");
        printf("=============\n");
        printf("nhap lua chon: ");
        scanf("%d", &choice);

        switch (choice) {
            case 1:
                nhapMang(arr, n);
                break;

            case 2:
                hienThiMang(arr, n);
                break;

            case 3:
                printf("diem trung binh = %.2f\n", tinhDiemTrungBinh(arr, n));
                break;

            case 4:
                printf("diem cao nhat = %.2f\n", timDiemCaoNhat(arr, n));
                break;

            case 5:
                printf("nhap diem chuan: ");
                scanf("%f", &diemChuan);
                printf("so diem dat (>= %.2f) la: %d\n", diemChuan, demSoDiemDat(arr, n, diemChuan));
                break;

            case 6:
                printf("da thoat\n");
                break;

            default:
                printf("la chon khong hop le! vui long chon lai.\n");
        }

    } while (choice != 6);

    return 0;
}

void nhapMang(float *arr, int n) {
    for (int i = 0; i < n; i++) {
        printf("Nhap diem thu %d: ", i + 1);
        scanf("%f", (arr + i)); 
    }
}

void hienThiMang(float *arr, int n) {
    printf("Cac diem trong mang: ");
    for (int i = 0; i < n; i++) {
        printf("%.2f ", *(arr + i)); 
    }
    printf("\n");
}

float tinhDiemTrungBinh(float *arr, int n) {
    if (n <= 0) return 0;
    float tong = 0;
    for (int i = 0; i < n; i++) {
        tong += *(arr + i);
    }
    return tong / n;
}

float timDiemCaoNhat(float *arr, int n) {
    if (n <= 0) return 0;
    float max = *arr;
    for (int i = 1; i < n; i++) {
        if (*(arr + i) > max) {
            max = *(arr + i);
        }
    }
    return max;
}

int demSoDiemDat(float *arr, int n, float diemChuan) {
    int dem = 0;
    for (int i = 0; i < n; i++) {
        if (*(arr + i) >= diemChuan) {
            dem++;
        }
    }
    return dem;
}