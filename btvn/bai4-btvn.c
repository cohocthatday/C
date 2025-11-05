#include <stdio.h>

int main()
{
    float a, b, c;

    printf("Nhap do dai 3 canh cua tam giac:\n");
    printf("Canh a: ");
    scanf("%f", &a);
    printf("Canh b: ");
    scanf("%f", &b);
    printf("Canh c: ");
    scanf("%f", &c);

    if (a + b > c && a + c > b && b + c > a)
    {
        printf("\n=> Ba canh co the tao thanh mot tam giac.\n");

        if (a == b && b == c)
        {
            printf("Day la tam giac deu.\n");
        }
        else if (a == b || a == c || b == c)
        {
            printf("Day la tam giac can.\n");
        }
        else if ((a * a + b * b == c * c) ||
                 (a * a + c * c == b * b) ||
                 (b * b + c * c == a * a))
        {
            printf("Day la tam giac vuong.\n");
        }
        else
        {
            printf("Day la tam giac thuong.\n");
        }
    }
    else
    {
        printf("\n=> tam giac khong hop le.\n");
    }

    return 0;
}