#include <stdio.h>
int main()
{
    int choice;
    
    do
    {
        printf("1. tinh tong\n");
        printf("2. tinh hieu \n");
        printf("3. tinh tich\n");
        printf("4. tinh thuong\n");
        printf("5. Thoat\n");
        printf("Nhap lua chon cua ban (1-5): ");
        scanf("%d", &choice);
        
        switch (choice)
        {
            case 1:
                printf("Ban chon bai 1\n");
                break;
            case 2:
                 printf("Ban chon bai 2\n");
                break;
            case 3:
                 printf("Ban chon bai 3\n");
                break;
            case 4:
                 printf("Ban chon bai 4\n");
                break;
            case 5:
                printf("Thoat chuong trinh.\n");
                break;
            default:
                printf("Lua chon khong hop le. Vui long chon lai.\n");
        }
    } while (choice !=5);
    


    return 0;
}