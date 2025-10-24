#include <stdio.h>

int main()
{

    int a, b, UCLN, BCNN;
    printf("Nhap so thu nhat: ");
    scanf("%d", &a);
    printf("Nhap so thu hai: ");
    scanf("%d", &b);
    
    for (int i = 1; i <= a; i++)
    {
        if (a % i == 0 && b % i == 0)
        {
            UCLN = i;
        }
    }
    
    if (a % UCLN == 0 && b % UCLN == 0)
    {
        BCNN = (a * b) / UCLN;
        printf("Boi chung nho nhat cua %d va %d la: %d ", a, b, BCNN);
    }
    

    return 0;
}