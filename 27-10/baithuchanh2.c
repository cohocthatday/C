#include <stdio.h>
#include <string.h>

int main()
{

    char hocSinh[5][10];
    int i = 0;
    int choice;
    int a;

    do
    {
        printf("Menu:\n");
        printf("1. Nhap ten hoc sinh\n");
        printf("2. Hien thi danh sach da nhap\n");
        printf("3. In ki tu dau tien va cuoi cua hoc sinh\n");
        printf("4. Thoat\n");
        printf("Moi ban lua chon: \n");
        scanf("%d", &choice);

        switch (choice)
        {
        case 1:
            printf("Nhap ten hoc sinh:\n");
            scanf("%s", hocSinh[i]);
            i++;
            break;
        case 2:
            printf("Danh sach hoc sinh da nhap:\n");
            for (a = 0; a < i; a++)
            {
                printf("Ten hoc sinh thu %d: %s\n", a + 1, hocSinh[a]);
            }
            break;
        case 3:
            printf("Ki tu dau tien va cuoi cua hoc sinh.\n");
           for ( a = 0; a < i; a++)
           {
               printf("Hoc sinh %d: %c %c\n", a + 1, hocSinh[a][0], hocSinh[a][strlen(hocSinh[a]) - 1]);
           }
           
            
            break;
        case 4:
            printf("Thoat chuong trinh.\n");
        default:
            break;
        }
    } while (choice != 4);

    return 0;
}
