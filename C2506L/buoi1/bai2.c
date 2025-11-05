#include <stdio.h>
int main()
{
    const N = 5;
    int lop[N];

    for (int i = 0; i < N; i++)
    {
        do {
            printf("nhap tuoi hoc sinh %d: ", i+1);
            scanf("%d", &lop[i]);
        } 
        while (lop[i] <=5 || lop[i] >=18);
        

    }
    
    

    return 0;
}

