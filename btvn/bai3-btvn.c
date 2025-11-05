#include <stdio.h>

int main()
{
    float a, b, result;
    char op;

    printf("Nhap so thu nhat: ");
    scanf("%f", &a);
    printf("Nhap so thu hai: ");
    scanf("%f", &b);

    printf("Nhap toan tu (+, -, *, /): ");
    scanf(" %c", &op); 

    switch (op)
    {
    case '+':
        result = a + b;
        printf("Ket qua: %.2f + %.2f = %.2f\n", a, b, result);
        break;

    case '-':
        result = a - b;
        printf("Ket qua: %.2f - %.2f = %.2f\n", a, b, result);
        break;

    case '*':
        result = a * b;
        printf("Ket qua: %.2f * %.2f = %.2f\n", a, b, result);
        break;

    case '/':
        if (b == 0)
            printf("Loi: Khong the chia cho 0!\n");
        else
        {
            result = a / b;
            printf("Ket qua: %.2f / %.2f = %.2f\n", a, b, result);
        }
        break;

    default:
        printf("Toan tu khong hop le!\n");
    }

    return 0;
}