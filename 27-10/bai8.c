#include <stdio.h>

int main()
{

    int cao;
    int trang;

    printf("Nhap chieu cao dong ho cat: ");
    scanf("%d", &cao);

    printf("\nHinh dong ho cat co chieu cao %d:\n", cao);


    for (int r = 1; r <= cao; r++)
    {
       if (r < cao / 2 + 1)
       {
        trang = r - 1;
       }
       else
       {
        trang = cao - r;
       }

        for (int s = 1; s <= trang; s++)
        {
            printf("  ");
        }

        for (int t = 1; t <= cao -2 * trang; t++)
        {
            printf("* ");
        }

        printf("\n");
       
    }
    


    return 0;
}