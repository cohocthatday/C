#include <stdio.h>
#include <string.h>
#include <math.h>

int main()
{

    int score[100];
    int i = 0;
    int choice;
    int a;

    do
    {
        printf("Menu:\n");
        printf("1. Nhap vao phan tu mang\n");
        printf("2. Hien thi danh sach phan tu\n");
        printf("3. Tinh tong cac phan tu\n");
        printf("4. Tinh gia tri trung binh\n");
        printf("5. Tim gia tri lon nhat\n");
        printf("6. Tim gia tri nho nhat\n");
        printf("7. Dem cac so chan le\n");
        printf("8. Thoat\n");
        printf("Moi ban lua chon: \n");
        scanf("%d", &choice);

        switch (choice)
        {
        case 1:
            printf("Nhap vao phan tu mang:\n");
            scanf("%d", &score[i]);
            i++;
            break;
        case 2:
            printf("Danh sach phan tu da nhap:\n");
            for (a = 0; a < i; a++)
            {
                printf("phan tu thu %d: %d\n", a + 1, score[a]);
            }
            break;
        case 3:
            printf("Tong cac phan tu:\n");
            int sum = 0;
            for (a = 0; a < i; a++)
            {
                sum += score[a];
            }
            printf("Tong: %d\n", sum);
            break;
        case 4:
            printf("Gia tri trung binh cac phan tu:\n");
            if (i > 0)
            {
                float average = (float)sum / i;
                printf("Gia tri trung binh: %.2f\n", average);
            }
            else
            {
                printf("Chua co phan tu nao.\n");
            }

            break;
        case 5:
            printf("Gia tri lon nhat:\n");
            if (i > 0)
            {
                int max = score[0];
                for (a = 1; a < i; a++)
                {
                    if (score[a] > max)
                    {
                        max = score[a];
                    }
                }
                printf("Gia tri lon nhat: %d\n", max);
            }
            else
            {
                printf("Chua co phan tu nao.\n");
            }

            break;
        case 6:
            printf("Gia tri nho nhat:\n");
            if (i > 0)
            {
                int min = score[0];
                for (a = 1; a < i; a++)
                {
                    if (score[a] < min)
                    {
                        min = score[a];
                    }
                }
                printf("Gia tri nho nhat: %d\n", min);
            }
            else
            {
                printf("Chua co phan tu nao.\n");
            }
            break;
        case 7:
            printf("Dem cac so chan le:\n");
            int evenCount = 0;
            int oddCount = 0;
            for (a = 0; a < i; a++)
            {
                if (score[a] % 2 == 0)
                {
                    evenCount++;
                }
                else
                {
                    oddCount++;
                }
            }
            printf("So luong so chan: %d\n", evenCount);
            printf("So luong so le: %d\n", oddCount);
            break;
        case 8:
            printf("Thoat chuong trinh.\n");
            break;
        default:
            break;
        }
    } while (choice != 8);

    return 0;
}
