#include <stdio.h>
#include <stdlib.h>

int main(){

    int maxSize = 10;
    int realSize = 0;
    char **data = malloc(maxSize * 10 *sizeof(char));
    int choice = 0;

    do
    {
        printf("Menu:\n");
        printf("1. Them ten hoc sinh\n");
        printf("2. Hien thi hoc sinh\n");
        printf("3. Thoat\n");
        printf("Moi ban lua chon: \n");
        scanf("%d", &choice);

        switch (choice)
        {
        case 1:

            if (realSize == maxSize)
            {
                void * realloc(void *ptr, size_t realSize);
            }

             printf("Nhap ten hoc sinh: ");
                scanf("%d", &data[realSize]);
                realSize++;
            break;
        case 2:
            printf("Danh sach hoc sinh: ");
            for (int i = 0; i < realSize; i++)
            {
                printf("%d ", data[i]);
            }
            printf("\n");
            break;
        case 3:
            printf("Thoat\n");
            break;
        default:
            printf("Lua chon khong hop le\n");
            break;
    } 
    } 
    
    while (choice != 3);
    


    return 0;
}