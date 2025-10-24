#include <stdio.h>

int main()
{

    int cao;

    printf("Nhap chieu cao tam giac: ");
    scanf("%d", &cao);

    printf("\nHinh tam giac can co chieu cao %d:\n", cao);

    for (int i = 1; i <= cao; i++)
    {

        for (int j = 1; j <= cao - i; j++)
        {
            printf("  ");
        }

        for (int k = 1; k <= 2 * i - 1; k++)
        {
            printf("* ");
        }

        printf("\n");
    }

    return 0;
}