#include <stdio.h>

int main() {
    int h;
    printf("Nhap chieu cao tam giac: ");
    scanf("%d", &h);

    int i = 1;        
    int j = 1;        
    int num;          

    while (i <= h) {
        int tong = (h - i) + (2 * i - 1);

        if (j <= h - i) {
            printf("  ");
        } else if (j <= tong) {
            int viTri = j - (h - i); 
            if (viTri <= i)
                num = viTri;         
            else
                num = 2 * i - viTri;  
            printf("%d ", num);
        } else {
            printf("\n");
            i++;  
            j = 0; 
        }
        j++;
    }

    return 0;
}