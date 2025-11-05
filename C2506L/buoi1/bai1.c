#include <stdio.h>

int main()
{
    int a, b;
    char c;

    printf("Nhap so a: ");
    scanf("%d", &a);
    printf("Nhap bo b: ");
    scanf("%d", &b);
    printf("Nhap toan tu (+ - * /): ");
    scanf(" %c", &c);

    switch (c)
    {
    case '+':
        printf("%d + %d = %d", a, b, a + b);
        break;
    case '-':
        printf("%d - %d = %d", a, b, a - b);
        break;
    case '*':
        printf("%d * %d = %d", a, b, a * b);
        break;
    case '/':
        if (b != 0)
        {
            printf("%d / %d = %.3f", a, b, (float)a / b);

        }
        else
        {
            printf("Khong the chia cho 0");
        }

        break;
    default:
        printf("yeu cau nhap dung dinh dang");
    }
    return 0;
}