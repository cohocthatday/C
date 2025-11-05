#include <stdio.h>

int main()
{

    int score[10];
    int i = 0;
    int choice;
    int a;

    do
    {
        printf("Menu:\n");
        printf("1. Nhap diem va hien thi\n");
        printf("2. Hien thi danh sach da nhap\n");
        printf("3. Thoat\n");
        printf("Moi ban lua chon: \n");
        scanf("%d", &choice);

        switch (choice)
        {
        case 1:
            printf("Nhap diem:\n");
            scanf("%d", &score[i]);
            i++;
            break;
        case 2:
            printf("Danh sach diem da nhap:\n");
            for (a = 0; a < i; a++)
            {
                printf("Diem thu %d: %d\n", a + 1, score[a]);
            }
            break;
        case 3:
            printf("Thoat chuong trinh.\n");

            break;
        default:
            break;
        }
    } while (choice != 3);

    return 0;
}
