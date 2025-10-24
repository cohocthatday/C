#include <stdio.h>

int main()
{
    int tuoi;
    float cannang;
    char ten[50];
    printf("Nhap vao ten cua ban: ");
    fgets(ten, sizeof(ten), stdin);
    printf("Nhap vao tuoi cua ban: ");
    scanf("%d", &tuoi);
    printf("Nhap vao can nang cua ban (kg): ");
    scanf("%f", &cannang);
    printf("Ten: %50s  Tuoi: %3d  Can nang: %.2f ", ten, tuoi, cannang);
    return 0;
}