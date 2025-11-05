#include <stdio.h>

int main(void) {
    const int N = 5;
    int ages[N];
    for (int i = 0; i < N; i++) {
        while (1) {
            printf("Nhap tuoi hoc sinh %d: ", i + 1);
            if (scanf("%d", &ages[i]) != 1) {
                int c;
                while ((c = getchar()) != '\n' && c != EOF);
                printf("Nhap khong hop le. Vui long nhap lai.\n");
                continue;
            }
            if (ages[i] > 5 && ages[i] < 18) break;
            printf("Tuoi phai >5 va <18. Vui long nhap lai.\n");
        }
    }

    int min = ages[0], max = ages[0], sum = ages[0];
    for (int i = 1; i < N; i++) {
        if (ages[i] < min) min = ages[i];
        if (ages[i] > max) max = ages[i];
        sum += ages[i];
    }

    double avg = (double)sum / N;
    printf("\nTuoi nho nhat: %d\n", min);
    printf("Tuoi lon nhat: %d\n", max);
    printf("Tuoi trung binh: %.2f\n", avg);

    return 0;
}