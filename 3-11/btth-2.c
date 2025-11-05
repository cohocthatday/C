#include <stdio.h>
#include <stdlib.h>

#define MAX_SIZE 10
#define NAME_LEN 50

int main(void) {
    int realSize = 0;
    char data[MAX_SIZE][NAME_LEN];
    int choice = 0;

    do {
        printf("Menu:\n");
        printf("1. Them ten hoc sinh\n");
        printf("2. Hien thi hoc sinh\n");
        printf("3. Thoat\n");
        printf("Moi ban lua chon: ");
        if (scanf("%d", &choice) != 1) {
            int c; while ((c = getchar()) != '\n' && c != EOF);
            continue;
        }

        switch (choice) {
            case 1:
                if (realSize < MAX_SIZE) {
                    printf("Nhap ten hoc sinh: ");
                    scanf("%49s", data[realSize]); // an toàn: giới hạn 49 ký tự
                    realSize++;
                } else {
                    printf("Danh sach da day\n");
                }
                break;
            case 2:
                printf("Danh sach hoc sinh: ");
                for (int i = 0; i < realSize; i++) {
                    printf("%s ", data[i]);
                }
                printf("\n");
                break;
            case 3:
                printf("Thoat\n");
                break;
            default:
                printf("Lua chon khong hop le\n");
        }
    } while (choice != 3);

    return 0;
}