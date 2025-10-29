#include <stdio.h>
#include <math.h>

int calculate(int *tong, int *hieu, int *tich, int *thuong, int a, int b) {
    int sum = 0;
    *tong = a + b;
    *hieu = a - b;
    *tich = a * b;
    *thuong = a / b;
    for (int i = 0; i < 4; i++) {
        sum += *(tong + i);
    }
    return sum;
}

int main() {
    int a, b;
    int tong, hieu, tich, thuong;
    printf("Nhap a: ");
    scanf("%d", &a);
    printf("Nhap b: ");
    scanf("%d", &b);
    int sum = calculate(&tong, &hieu, &tich, &thuong, a, b);
    printf("Tong cac so la: %d\n", tong);
    printf("Hieu cac so la: %d\n", hieu);
    printf("Tich cac so la: %d\n", tich);
    printf("Thuong cac so la: %d\n", thuong);
    return 0;

}

// int checkPrime(int n)
// {
//     if (n <= 1)
//     {
//         return 0;
//     }
//     else
//     {
//         for (int i = 2; i < n; i++)
//         {
//             if (n % i == 0)
//             {

//                 return 0;
//             }
//         }

//         return 1;
//     }
// }

// int tinhtongSoNguyenTo(int number){
//     int sum = 0;
//     for (int i = 2; i < number; i++)
//     {
//         if (checkPrime(i) == 1)
//         {
//             sum+=i;
//         }
        
//     }
//     return sum;
    
// }

// int demSoLuongSoNguyenTo(){

//     float tong = 0, int dem = 0;



// }

// int main(){

//     printf("tong cac so nguyen to la: %d", tinhtongSoNguyenTo(50));
//     return 0;
// }

// int main()
// {

//     int n;
//     printf("Nhap so nguyen duong: ");
//     scanf("%d", &n);
//     int ketqua = checkPrime(n);
//     if (ketqua == 1)
//     {
//         printf("la so nguyen to");
//     }

//     else 
//     {
//         printf("ko la so nguyen to");
//     }
    

        
// }
