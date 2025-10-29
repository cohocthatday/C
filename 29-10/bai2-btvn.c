#include <stdio.h>

int main() {
    int a[10];      
    int chan[10];    
    int le[10];     
    int nChan = 0;   
    int nLe = 0;     

    printf("Nhap 10 so nguyen:\n");
    for (int i = 0; i < 10; i++) {
        scanf("%d", &a[i]);
    }

    for (int i = 0; i < 10; i++) {
        if (a[i] % 2 == 0) {
            chan[nChan] = a[i];
            nChan++;
        } else {
            le[nLe] = a[i];
            nLe++;
        }
    }

    printf("\nCac so chan: ");
    for (int i = 0; i < nChan; i++) {
        printf("%d ", chan[i]);
    }

    printf("\nCac so le: ");
    for (int i = 0; i < nLe; i++) {
        printf("%d ", le[i]);
    }

    return 0;
}