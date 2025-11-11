#include <stdio.h>
#include <string.h>
#include <ctype.h>
#include <stdlib.h>

void daoNguoc(char *s)
{
    int n = strlen(s);
    for (int i = 0; i < n / 2; i++)
    {
        char temp = s[i];
        s[i] = s[n - i - 1];
        s[n - i - 1] = temp;
    }
}

void chuanHoaTen(char *s)
{
    char temp[200];
    int j = 0, n = strlen(s);

    for (int i = 0; i < n; i++)
    {
        if (!(s[i] == ' ' && (i == 0 || s[i + 1] == ' ' || s[i + 1] == '\0')))
        {
            temp[j++] = s[i];
        }
    }
    temp[j] = '\0';
    strcpy(s, temp);

    for (int i = 0; s[i]; i++)
    {
        s[i] = tolower(s[i]);
    }

    if (s[0])
        s[0] = toupper(s[0]);
    for (int i = 1; s[i]; i++)
    {
        if (s[i - 1] == ' ' && s[i] != ' ')
            s[i] = toupper(s[i]);
    }
}

void printMenu()
{
    printf("\n========== MENU ==========\n");
    printf("1. Nhap va in chuoi\n");
    printf("2. In hoa / in thuong chuoi\n");
    printf("3. Dao nguoc chuoi\n");
    printf("4. Tan suat xuat hien ky tu\n");
    printf("5. Chuan hoa ten\n");
    printf("0. Thoat\n");
    printf("===========================\n");
}

int main()
{
    char str[200];
    int choice;

    printf("Nhap chuoi: ");
    fgets(str, sizeof(str), stdin);
    str[strcspn(str, "\n")] = '\0';

    do
    {
        printMenu();
        printf("Chon chuc nang (0-5): ");
        scanf("%d", &choice);
        getchar();

        switch (choice)
        {
        case 1:
        {
            printf("\nBai 1: Chuoi vua nhap: %s\n", str);
            break;
        }
        case 2:
        {
            char upper[200], lower[200];
            strcpy(upper, str);
            strcpy(lower, str);

            for (int i = 0; upper[i]; i++)
                upper[i] = toupper(upper[i]);
            for (int i = 0; lower[i]; i++)
                lower[i] = tolower(lower[i]);

            printf("\nBai 2:\nChuoi in hoa: %s\nChuoi in thuong: %s\n", upper, lower);
            break;
        }
        case 3:
        {
            char rev[200];
            strcpy(rev, str);
            daoNguoc(rev);
            printf("\nBai 3: Chuoi dao nguoc: %s\n", rev);
            break;
        }
        case 4:
        {
            int freq[256] = {0};
            for (int i = 0; str[i]; i++)
                freq[(unsigned char)str[i]]++;

            printf("\nBai 4: Tan suat xuat hien cac ky tu:\n");
            for (int i = 0; i < 256; i++)
            {
                if (freq[i] > 0)
                {
                    if (i == ' ')
                        printf("' ' (space): %d\n", freq[i]);
                    else
                        printf("%c: %d\n", i, freq[i]);
                }
            }
            break;
        }
        case 5:
        {
            char ten[200];
            strcpy(ten, str);
            chuanHoaTen(ten);
            printf("\nBai 5: Chuoi sau khi chuan hoa: %s\n", ten);
            break;
        }
        case 0:
            printf("\nThoat chuong trinh.\n");
            break;
        default:
            printf("\nLua chon khong hop le! Vui long nhap lai.\n");
        }

    } while (choice != 0);

    return 0;
}