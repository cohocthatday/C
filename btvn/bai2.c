#include <stdio.h>

int main()
{
    int cao;

    printf("Nhap chieu cao tam giac: ");
    scanf("%d", &cao);

    printf("\nHinh tam giac vuong co chieu cao %d:\n", cao);

    for (int i = 1; i <= cao; i++) {        
        for (int j = 1; j <= i; j++) {      
            printf("* ");
        }
        printf("\n"); 
    }

    return 0;
}