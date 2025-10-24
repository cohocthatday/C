#include <stdio.h>

int main()
{

    int a, b, UCLN;
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
    
    printf("Uoc chung lon nhat cua %d va %d la: %d ", a, b, UCLN);

    return 0;
}