#include <stdio.h>

int main()
{

    int cao;

    printf("Nhap chieu cao tam giac: ");
    scanf("%d", &cao);

    printf("\nTam giac so co chieu cao %d:\n", cao);

    for (int i = 1; i <= cao; i++)
    {

        for (int j = 1; j <= cao - i; j++)
        {
            printf("  ");
        }

        for (int j = 1; j <= i; j++)
        {
            printf("%d ", j);
        }

        for (int j = i - 1; j >= 1; j--)
        {
            printf("%d ", j);
        }

        printf("\n");
    }

    return 0;
}