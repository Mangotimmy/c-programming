#include <stdio.h>
#include <stdlib.h>
#define SIZE 10

void count(int arr[]);

int main(void){

    int test[SIZE] = {1, 8, 9, 10, 2, 5, 3, 17, 23, 24};
    int i;
    
    printf("�}�C��������:\n");
    
    for(i = 0; i < SIZE; i++)
        printf("%2d ", test[i]);
    printf("\n\n");
    
    count(test);
    
    system("pause");
    return 0;

}

void count(int arr[]) {

    int i;
    int cont_odd = 0, cont_even = 0;
    
    for(i = 0; i < SIZE; i++)
    {
        if(arr[i] % 2 == 0)
            cont_even += 1;
        else
            cont_odd += 1;
    }
    
    printf("�}�C����%d�Ӱ���\n", cont_even);
    for(i = 0; i < SIZE; i++)
        if(arr[i] % 2 == 0)
            printf("%2d ", arr[i]);
    printf("\n\n");
    
    printf("�}�C����%d�ө_��\n", cont_odd);
    for(i = 0; i < SIZE; i++)
        if(arr[i] % 2 != 0)
            printf("%2d ", arr[i]);
    printf("\n");

}
