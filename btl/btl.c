#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define ADMIN 1
#define TEACHER 2
#define STUDENT 3

typedef struct
{
    int id;
    char username[50];
    char password[50];
    int role;
} TaiKhoan;

typedef struct
{
    int id;
    char tenKhoaHoc[100];
    char giaoVien[50];
} KhoaHoc;

void menuAdmin();
void menuTeacher();
void menuStudent();
void dangNhap(TaiKhoan *mangTK, int soTK, KhoaHoc *mangKH, int *soKH);
void quanLyTaiKhoan(TaiKhoan **mangTK, int *soTK);
void quanLyKhoaHoc(KhoaHoc **mangKH, int *soKH);
void dangKyHoc(KhoaHoc *mangKH, int soKH, char *tenSV);

void xoaBoDem()
{
    int c;
    while ((c = getchar()) != '\n' && c != EOF)
        ;
}

void pressEnter()
{
    printf("\nNhan Enter de tiep tuc...");
    xoaBoDem();
}

void menuAdmin()
{
    printf("\n===== MENU ADMIN =====\n");
    printf("1. Quan ly tai khoan\n");
    printf("2. Quan ly khoa hoc\n");
    printf("3. Dang xuat\n");
}

void menuTeacher()
{
    printf("\n===== MENU GIAO VIEN =====\n");
    printf("1. Xem danh sach khoa hoc\n");
    printf("2. Them khoa hoc moi\n");
    printf("3. Dang xuat\n");
}

void menuStudent()
{
    printf("\n===== MENU HOC VIEN =====\n");
    printf("1. Xem danh sach khoa hoc\n");
    printf("2. Dang ky khoa hoc\n");
    printf("3. Dang xuat\n");
}

void quanLyTaiKhoan(TaiKhoan **mangTK, int *soTK)
{
    int chon;
    do
    {
        printf("\n--- QUAN LY TAI KHOAN ---\n");
        printf("1. Xem tat ca tai khoan\n");
        printf("2. Them tai khoan moi\n");
        printf("3. Quay lai\n");
        printf("Chon: ");
        scanf("%d", &chon);
        xoaBoDem();

        if (chon == 1)
        {
            printf("\nDanh sach tai khoan:\n");
            for (int i = 0; i < *soTK; i++)
            {
                printf("%d. %s (%s)\n",
                       (*mangTK)[i].id,
                       (*mangTK)[i].username,
                       (*mangTK)[i].role == ADMIN ? "Admin" : (*mangTK)[i].role == TEACHER ? "Giao vien" : "Hoc vien");
            }
            pressEnter();
        }
        else if (chon == 2)
        {
            *mangTK = realloc(*mangTK, (*soTK + 1) * sizeof(TaiKhoan));
            TaiKhoan *tk = &(*mangTK)[*soTK];

            tk->id = *soTK + 1;
            printf("Nhap username: ");
            fgets(tk->username, 50, stdin);
            tk->username[strcspn(tk->username, "\n")] = '\0';
            printf("Nhap password: ");
            fgets(tk->password, 50, stdin);
            tk->password[strcspn(tk->password, "\n")] = '\0';

            printf("Nhap vai tro (1.Admin, 2.Giao vien, 3.Hoc vien): ");
            scanf("%d", &tk->role);
            xoaBoDem();

            (*soTK)++;
            printf("Them tai khoan thanh cong!\n");
            pressEnter();
        }

    } while (chon != 3);
}

void quanLyKhoaHoc(KhoaHoc **mangKH, int *soKH)
{
    int chon;
    do
    {
        printf("\n--- QUAN LY KHOA HOC ---\n");
        printf("1. Xem danh sach khoa hoc\n");
        printf("2. Them khoa hoc moi\n");
        printf("3. Quay lai\n");
        printf("Chon: ");
        scanf("%d", &chon);
        xoaBoDem();

        if (chon == 1)
        {
            printf("\nDanh sach khoa hoc:\n");
            for (int i = 0; i < *soKH; i++)
            {
                printf("%d. %s (GV: %s)\n", (*mangKH)[i].id, (*mangKH)[i].tenKhoaHoc, (*mangKH)[i].giaoVien);
            }
            pressEnter();
        }
        else if (chon == 2)
        {
            *mangKH = realloc(*mangKH, (*soKH + 1) * sizeof(KhoaHoc));
            KhoaHoc *kh = &(*mangKH)[*soKH];

            kh->id = *soKH + 1;
            printf("Nhap ten khoa hoc: ");
            fgets(kh->tenKhoaHoc, 100, stdin);
            kh->tenKhoaHoc[strcspn(kh->tenKhoaHoc, "\n")] = '\0';

            printf("Nhap ten giao vien: ");
            fgets(kh->giaoVien, 50, stdin);
            kh->giaoVien[strcspn(kh->giaoVien, "\n")] = '\0';

            (*soKH)++;
            printf("Them khoa hoc thanh cong!\n");
            pressEnter();
        }

    } while (chon != 3);
}

void dangKyHoc(KhoaHoc *mangKH, int soKH, char *tenSV)
{
    printf("\nDanh sach khoa hoc:\n");
    for (int i = 0; i < soKH; i++)
    {
        printf("%d. %s (GV: %s)\n", mangKH[i].id, mangKH[i].tenKhoaHoc, mangKH[i].giaoVien);
    }
    int chon;
    printf("\nNhap ID khoa hoc muon dang ky: ");
    scanf("%d", &chon);
    xoaBoDem();

    for (int i = 0; i < soKH; i++)
    {
        if (mangKH[i].id == chon)
        {
            printf("%s da dang ky thanh cong khoa hoc: %s\n", tenSV, mangKH[i].tenKhoaHoc);
            pressEnter();
            return;
        }
    }
    printf("Khong tim thay khoa hoc!\n");
    pressEnter();
}

void dangNhap(TaiKhoan *mangTK, int soTK, KhoaHoc *mangKH, int *soKH)
{
    char user[50], pass[50];
    int timThay = 0;

    printf("\n===== DANG NHAP =====\n");
    printf("Username: ");
    fgets(user, sizeof(user), stdin);
    user[strcspn(user, "\n")] = '\0';

    printf("Password: ");
    fgets(pass, sizeof(pass), stdin);
    pass[strcspn(pass, "\n")] = '\0';

    for (int i = 0; i < soTK; i++)
    {
        if (strcmp(mangTK[i].username, user) == 0)
        {
            timThay = 1;
            if (strcmp(mangTK[i].password, pass) == 0)
            {
                printf("\nDang nhap thanh cong!\n");
                int chon;
                do
                {
                    switch (mangTK[i].role)
                    {
                    case ADMIN:
                        menuAdmin();
                        printf("Chon: ");
                        scanf("%d", &chon);
                        xoaBoDem();
                        if (chon == 1)
                            quanLyTaiKhoan(&mangTK, &soTK);
                        else if (chon == 2)
                            quanLyKhoaHoc(&mangKH, soKH);
                        break;
                    case TEACHER:
                        menuTeacher();
                        printf("Chon: ");
                        scanf("%d", &chon);
                        xoaBoDem();
                        if (chon == 1)
                            quanLyKhoaHoc(&mangKH, soKH);
                        else if (chon == 2)
                            quanLyKhoaHoc(&mangKH, soKH);
                        break;
                    case STUDENT:
                        menuStudent();
                        printf("Chon: ");
                        scanf("%d", &chon);
                        xoaBoDem();
                        if (chon == 1)
                            quanLyKhoaHoc(&mangKH, soKH);
                        else if (chon == 2)
                            dangKyHoc(mangKH, *soKH, mangTK[i].username);
                        break;
                    }
                } while (chon != 3);
            }
            else
            {
                printf("Sai mat khau!\n");
            }
            break;
        }
    }
    if (!timThay)
        printf("Tai khoan khong ton tai!\n");
}

int main()
{
    int soTK = 5, soKH = 2;

    TaiKhoan *mangTK = malloc(soTK * sizeof(TaiKhoan));
    KhoaHoc *mangKH = malloc(soKH * sizeof(KhoaHoc));

    if (!mangTK || !mangKH)
    {
        printf("Khong du bo nho!\n");
        return 1;
    }

    mangTK[0] = (TaiKhoan){1, "admin", "admin", ADMIN};
    mangTK[1] = (TaiKhoan){2, "gv1", "123", TEACHER};
    mangTK[2] = (TaiKhoan){3, "gv2", "123", TEACHER};
    mangTK[3] = (TaiKhoan){4, "sv1", "111", STUDENT};
    mangTK[4] = (TaiKhoan){5, "sv2", "111", STUDENT};

    mangKH[0] = (KhoaHoc){1, "Lap trinh C", "gv1"};
    mangKH[1] = (KhoaHoc){2, "Lap trinh Python", "gv2"};

    dangNhap(mangTK, soTK, mangKH, &soKH);

    free(mangTK);
    free(mangKH);
    return 0;
}