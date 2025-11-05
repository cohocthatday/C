#include <stdio.h>

int main()
{
   float point;
    printf("Nhap vao diem cua ban: ");
    scanf("%f", &point);
    if (point >= 9 && point <= 10)
    {
        printf("xuat sac\n");
    }
    else if (point >= 8 && point < 9)
    {
        printf("gioi\n");
    }
    else if (point >= 6.5 && point < 8)
    {
        printf("kha\n");
    }
    else if (point >= 5 && point < 6.5)
    {
        printf("trung binh\n");
    }
    else if (point >= 0 && point < 5)
    {
        printf("yeu\n");
    }
   
    
   
    
    return 0;
}