#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <stdbool.h>

bool laSoNguyenTo(int n)
{
    if (n < 2)
        return false;
    for (int i = 2; i <= sqrt(n); i++)
    {
        if (n % i == 0)
            return false;
    }
    return true;
}

void swap(int *x, int *y)
{
    int temp = *x;
    *x = *y;
    *y = temp;
}

void nhapMang(int **arr, int *n)
{
    printf("Nhap so luong phan tu: ");
    scanf("%d", n);
    *arr = (int *)malloc(*n * sizeof(int));
    if (*arr == NULL)
    {
        printf("Khong du bo nho!\n");
        exit(1);
    }
    for (int i = 0; i < *n; i++)
    {
        printf("Nhap arr[%d]: ", i);
        scanf("%d", &(*arr)[i]);
    }
}

void inMang(int *arr, int n)
{
    printf("Mang hien tai: ");
    for (int i = 0; i < n; i++)
        printf("%d ", arr[i]);
    printf("\n");
}

void timMaxMinTBC(int *arr, int n)
{
    if (n == 0)
        return;
    int max = arr[0], min = arr[0], sum = 0;
    for (int i = 0; i < n; i++)
    {
        if (arr[i] > max)
            max = arr[i];
        if (arr[i] < min)
            min = arr[i];
        sum += arr[i];
    }
    printf("Max = %d\n", max);
    printf("Min = %d\n", min);
    printf("Trung binh cong = %.2f\n", (float)sum / n);
}

void lietKeSoNguyenTo(int *arr, int n)
{
    printf("Cac so nguyen to trong mang: ");
    int dem = 0;
    for (int i = 0; i < n; i++)
    {
        if (laSoNguyenTo(arr[i]))
        {
            printf("%d ", arr[i]);
            dem++;
        }
    }
    if (dem == 0)
        printf("Khong co so nguyen to nao!");
    printf("\nTong so nguyen to: %d\n", dem);
}

void sapXepTangDan(int *arr, int n)
{
    for (int i = 0; i < n - 1; i++)
        for (int j = i + 1; j < n; j++)
            if (arr[i] > arr[j])
                swap(&arr[i], &arr[j]);
    printf("Mang sau khi sap xep tang dan: ");
    inMang(arr, n);
}

void themPhanTu(int **arr, int *n)
{
    int k, V;
    printf("Nhap vi tri k de them (0 -> %d): ", *n);
    scanf("%d", &k);
    printf("Nhap gia tri V can them: ");
    scanf("%d", &V);

    if (k < 0 || k > *n)
    {
        printf("Vi tri khong hop le!\n");
        return;
    }

    *arr = (int *)realloc(*arr, (*n + 1) * sizeof(int));
    for (int i = *n; i > k; i--)
        (*arr)[i] = (*arr)[i - 1];
    (*arr)[k] = V;
    (*n)++;

    printf("Mang sau khi them: ");
    inMang(*arr, *n);
}

void xoaPhanTu(int **arr, int *n)
{
    int k;
    printf("Nhap vi tri k de xoa (0 -> %d): ", *n - 1);
    scanf("%d", &k);

    if (k < 0 || k >= *n)
    {
        printf("Vi tri khong hop le!\n");
        return;
    }

    for (int i = k; i < *n - 1; i++)
        (*arr)[i] = (*arr)[i + 1];
    (*n)--;
    *arr = (int *)realloc(*arr, *n * sizeof(int));

    printf("Mang sau khi xoa: ");
    inMang(*arr, *n);
}

void menu()
{
    printf("\n==================== MENU ====================\n");
    printf("1. Nhap mang\n");
    printf("2. In mang\n");
    printf("3. Tim MAX, MIN, TBC\n");
    printf("4. Liet ke so nguyen to\n");
    printf("5. Sap xep tang dan\n");
    printf("6. Them phan tu\n");
    printf("7. Xoa phan tu\n");
    printf("0. Thoat\n");
    printf("===============================================\n");
}

int main()
{
    int *arr = NULL;
    int n = 0, choice;

    do
    {
        menu();
        printf("Nhap lua chon: ");
        scanf("%d", &choice);

        switch (choice)
        {
        case 1:
            if (arr != NULL)
                free(arr);
            nhapMang(&arr, &n);
            break;
        case 2:
            inMang(arr, n);
            break;
        case 3:
            timMaxMinTBC(arr, n);
            break;
        case 4:
            lietKeSoNguyenTo(arr, n);
            break;
        case 5:
            sapXepTangDan(arr, n);
            break;
        case 6:
            themPhanTu(&arr, &n);
            break;
        case 7:
            xoaPhanTu(&arr, &n);
            break;
        case 0:
            printf("Thoat chuong trinh.\n");
            break;
        default:
            printf("Lua chon khong hop le!\n");
        }
    } while (choice != 0);

    free(arr);
    return 0;
}