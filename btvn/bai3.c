#include <stdio.h>

int main()
{

    int dai, rong;

    printf("Nhap chieu dai (>= 3): ");
    scanf("%d", &dai);

    printf("Nhap chieu rong (>= 3): ");
    scanf("%d", &rong);

    if (dai < 3 || rong < 3)
    {
        printf("Loi: Chieu dai va chieu rong phai lon hon 3!\n");
    }
    else
    {
        printf("\nHinh chu nhat rong ruot %d x %d:\n", rong, dai);

        for (int i = 1; i <= rong; i++)
        {
            for (int j = 1; j <= dai; j++)
            {
                if (i == 1 || i == rong || j == 1 || j == dai)
                    printf("* ");
                else
                    printf("  ");
            }
            printf("\n");
        }
    }

    return 0;
}