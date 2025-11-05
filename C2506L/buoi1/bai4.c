#include <stdio.h>
int main(int argc, char const *argv[])
{
    
    int n;
    printf("nahp vao so nguyen n: ");
    scanf("%d", &n);

    if (n > 0)
    {
        printf("so vua nhap la so duong");
    }else if (n < 0)
    {
        printf("so vua nhap la so am");
    }else {
        printf("so vua nhap la so 0");
    }
    
    


    return 0;
}
