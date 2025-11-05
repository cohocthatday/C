#include <stdio.h>
#include <stdlib.h>

int main(int argc, char const *argv[])
{
    
    int data[5] = {23, 90, 9, 25, 16};
    for (int j = 0; j < 4; j++)
    {
        for (int i = 0; i < 4; i++)
        {
            if (data[i] > data[i+1])
            {
                int temp = data[i+1];
                data[i+1] = data[i];
                data[i] = temp;
            }
        }
        
    }
    printf("Mang sau khi sap xep: \n");
    for (int i = 0; i < 5; i++)
    {
        printf("%d ", data[i]);
    }
    

    return 0;
}
