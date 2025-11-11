#include <stdio.h>

void tangGiaTri(int *p)
{
    *p += 10;
}

void hoanDoi(int *x, int *y)
{
    int temp = *x;
    *x = *y;
    *y = temp;
}

int main()
{
    int a, b;
    int *p;

    printf("Nhap gia tri cho a: ");
    scanf("%d", &a);

    p = &a;

    printf("\n--- THONG TIN CON TRO ---\n");
    printf("Gia tri cua p (dia chi cua a): %p\n", p);
    printf("Gia tri tai dia chi p tro toi (*p): %d\n", *p);
    printf("Gia tri cua a: %d\n", a);
    printf("Dia chi cua a: %p\n", &a);

    printf("\n=> Nhan xet: Gia tri cua p chinh la dia chi cua a.\n");

    a = 50;
    printf("\nSau khi thay doi a = 50:\n");
    printf("Gia tri tai dia chi p tro toi (*p) = %d (thay doi theo a)\n", *p);

    *p = 100;
    printf("\nSau khi thay doi *p = 100:\n");
    printf("Gia tri cua a = %d (thay doi theo p)\n", a);

    tangGiaTri(&a);
    printf("\nSau khi tang gia tri cua a len 10 don vi: a = %d\n", a);

    printf("\nNhap gia tri cho b: ");
    scanf("%d", &b);

    printf("\nTruoc khi hoan doi: a = %d, b = %d\n", a, b);
    hoanDoi(&a, &b);
    printf("Sau khi hoan doi:  a = %d, b = %d\n", a, b);

    return 0;
}


// p = &a; → con trỏ p lưu địa chỉ của biến a

// *p → giá trị tại địa chỉ mà p trỏ tới, tức chính là giá trị của a

// Khi a thay đổi → *p cũng thay đổi, vì cả hai cùng tham chiếu tới một vùng nhớ

// Khi *p thay đổi → a cũng thay đổi, vì đó là cùng một vị trí trong bộ nhớ