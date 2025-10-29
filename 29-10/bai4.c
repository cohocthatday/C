#include <stdio.h>

int main() {
    char ten[100][50];     
    int gioiTinh[100];     
    float diem[100];       
    int n = 0;             
    int chon;             

    while (1) {
        printf("\n=== MENU ===\n");
        printf("1. Nhap 1 hoc sinh\n");
        printf("2. In tat ca hoc sinh\n");
        printf("3. Diem TB hoc sinh nam\n");
        printf("4. Diem TB hoc sinh nu\n");
        printf("5. Hoc sinh nu\n");
        printf("6. Hoc sinh nam\n");
        printf("7. Thoat\n");
        printf("Chon: ");
        scanf("%d", &chon);

        if (chon == 1) {
            printf("Nhap ten: ");
            scanf("%s", ten[n]); 
            printf("Nhap gioi tinh (1=Nam, 2=Nu): ");
            scanf("%d", &gioiTinh[n]);
            printf("Nhap diem: ");
            scanf("%f", &diem[n]);
            n++;
        }

        else if (chon == 2) {
            for (int i = 0; i < n; i++) {
                printf("%d. %s - ", i + 1, ten[i]);
                if (gioiTinh[i] == 1) printf("Nam, ");
                else printf("Nu, ");
                printf("Diem: %.2f\n", diem[i]);
            }
        }

        else if (chon == 3) {
            float tong = 0; int dem = 0;
            for (int i = 0; i < n; i++)
                if (gioiTinh[i] == 1) { tong += diem[i]; dem++; }
            if (dem > 0) printf("Diem TB nam: %.2f\n", tong / dem);
            else printf("Khong co hoc sinh nam\n");
        }

        else if (chon == 4) {
            float tong = 0; int dem = 0;
            for (int i = 0; i < n; i++)
                if (gioiTinh[i] == 2) { tong += diem[i]; dem++; }
            if (dem > 0) printf("Diem TB nu: %.2f\n", tong / dem);
            else printf("Khong co hoc sinh nu\n");
        }

        else if (chon == 5) {
            printf("Hoc sinh nu:\n");
            for (int i = 0; i < n; i++)
                if (gioiTinh[i] == 2)
                    printf("%s - %.2f\n", ten[i], diem[i]);
        }

        else if (chon == 6) {
            printf("Hoc sinh nam:\n");
            for (int i = 0; i < n; i++)
                if (gioiTinh[i] == 1)
                    printf("%s - %.2f\n", ten[i], diem[i]);
        }

        else if (chon == 7) {
            printf("Thoat chuong trinh.\n");
            break;
        }

        else {
            printf("Lua chon khong hop le!\n");
        }
    }

    return 0;
}