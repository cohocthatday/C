#include <stdio.h>

int main()
{
    int dem;
    printf("Nhap vao so nguyen tu 1 den 7: ");
    scanf("%d", &dem);
    switch (dem)
    {
    case 1:
        printf("Thu Hai\n");
        break;
    case 2:
        printf("Thu Ba\n");
        break;
    case 3:
        printf("Thu Tu\n");
        break;
    case 4:
        printf("Thu Nam\n");
        break;
    case 5:
        printf("Thu sau\n");
        break;
    case 6:
        printf("Thu bay\n");
        break;
   
    default:
        printf("gia tri k hop le\n");
        break;
    }

    return 0;
}