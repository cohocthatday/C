#include <stdio.h>
int main()
{
    int n;
    int isPrime = 0;
    int i = 2;
    printf("Nhap vao so n:  ");
    scanf("%d", &n);
    

    while (i < n)
    {
       if (n % i == 0)
        {
            isPrime = 1;
            break;
        }
        i++;
    }

    if (isPrime == 1)
    {
        printf("%d khong phai la so nguyen to\n", n);
    }
    else
    {
        printf("%d la so nguyen to\n", n);
    }

    return 0;
}