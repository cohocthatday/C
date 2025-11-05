#include <stdio.h>

struct Student
{
   char name[50];
   int age;
   char gioiTinh[10];
   char lop[10];
};

int main(int argc, char const *argv[])
{

    {
        struct Student sv1;
        printf("nhap vao ten sinh vien: ");
        fgets(sv1.name, sizeof(sv1.name), stdin);
        printf("nhap vao tuoi sinh vien: ");
        scanf("%d" ,&sv1.age);
        printf("nhap vao gioi tinh: ");
        scanf("%s" ,&sv1.gioiTinh);
        printf("nhap vao lop: ");
        scanf("%s" ,&sv1.lop);

        printf("ten:%s  tuoi:%d  gioi tinh:%s  lop:%s", sv1.name, sv1.age, sv1.gioiTinh, sv1.lop);


    };

    


    return 0;
}
