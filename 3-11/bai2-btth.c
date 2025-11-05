#include <stdio.h>
#include <stdlib.h>

typedef struct Book
{
    char name[50];
    char tacGia[50];
    int namPhatHanh;
    int giaBan;
} Book;


void nhapThongTinSach(Book *listbook, int currentSize) ;
void hienThiThongTinSach(Book *listbook, int n) ;

void sapXepTheoNamPhatHanh(Book *listBook, int n) ;

int main(int argc, char const *argv[])
{
    int nowSize = 0;
    int maxSize = 10;
    Book *listBook = (Book *)malloc(10 * sizeof(Book));
    int choice = 0;

    do
    {

        printf("Menu:\n");
        printf("1. Them sach\n");
        printf("2. Hien thi sach\n");
        printf("3. Sap xep theo nam phat hanh\n");
        printf("4. Thoat\n");
        printf("Moi ban lua chon: \n");
        scanf("%d", &choice);

        switch (choice)
        {
        case 1:
        if (nowSize == maxSize)
        {
            listBook = (Book *)realloc(listBook, 10 * sizeof(Book));
            maxSize += 10;
        }
        
            nhapThongTinSach(listBook, nowSize);
            nowSize++;
            break;
        case 2:
            hienThiThongTinSach(listBook, nowSize);
            break;
        case 3:
            sapXepTheoNamPhatHanh(listBook, nowSize);
            break;
        case 4:
            printf("Thoat chuong trinh.\n");
            break;

        default:
            break;
        }

    } while (choice != 4);

    free(listBook);

    return 0;
}

void nhapThongTinSach(Book *listbook, int currentSize) {
    printf("Nhap ten sach: ");
    scanf("%s", listbook[currentSize].name);
    printf("Nhap ten tac gia: ");
    scanf("%s", listbook[currentSize].tacGia);
    printf("Nhap nam phat hanh: ");
    scanf("%d", &listbook[currentSize].namPhatHanh);
    printf("Nhap gia ban: ");
    scanf("%d", &listbook[currentSize].giaBan);
}

void hienThiThongTinSach(Book *listbook, int n) {
    for (int i = 0; i < n; i++) {
        printf("Ten sach: %s\n", listbook[i].name);
        printf("Ten tac gia: %s\n", listbook[i].tacGia);
        printf("Nam phat hanh: %d\n", listbook[i].namPhatHanh);
        printf("Gia ban: %d\n", listbook[i].giaBan);
    }
}

void sapXepTheoNamPhatHanh(Book *listbook, int n) {
    for (int i = 0; i < n - 1; i++) {
        for (int j = i + 1; j < n; j++) {
            if (listbook[i].namPhatHanh > listbook[j].namPhatHanh) {
                Book temp = listbook[i];
                listbook[i] = listbook[j];
                listbook[j] = temp;
            }
        }
    }
    printf("Mang sau khi sap xep: \n");
    for (int i = 0; i < n; i++) {
        printf("Nam phat hanh: %d\n", listbook[i].namPhatHanh);
        printf("Ten sach: %s\n", listbook[i].name);
        printf("Ten tac gia: %s\n", listbook[i].tacGia);
        printf("Gia ban: %d\n", listbook[i].giaBan);
    }
}