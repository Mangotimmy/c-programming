#include <stdio.h>
#include <stdlib.h>
#define ROW 3
#define COL 6

int main(void){

    int data[ROW][COL] = {{1, 33, 21, 56, 45, 33}, {2, 77, 33, 68, 45, 23}, {3, 43, 55, 43, 67, 65}};
    int price[] = {12, 16, 10, 14, 15};
    int i, j, sum = 0, max = 0;
    int manarr[ROW], proarr[COL - 1];
    int best_saleman = 1;
    char product_name[] = {'A', 'B', 'C', 'D', 'E'};
    
    printf("�Y���q�� A�BB�BC�BD �M E �����ز��~�A�����ӧO�� 12�B16�B10�B14 �P 15 ���F\n�Ӥ��q�T��P����Y����P��q�p�U : \n\n");
    printf("�ӫ~���B");
	for(i = 0; i <5; i++) {
    	printf("%d��\t", price[i]);
	}
	printf("\n");
    printf("�P���\t���~A\t���~B\t���~C\t���~D\t���~E\n");

    for(i = 0; i < ROW; i++)
    {
        for(j = 0; j < COL; j++)
        {
            printf("%d\t", data[i][j]);
            if(j != 0)
                sum += (data[i][j] * price[j - 1]);
            
        }
        manarr[i] = sum;
        sum = 0;
        printf("\n");
    }

    printf("\n");
    
    printf("(a)\n");
    for(i = 0; i < ROW; i++){
        printf("�P��� %d �����P���`���B�� : %d ��\n", i + 1, manarr[i]);
	}

    printf("\n");

    for(j = 1; j < COL; j++)
    {
        for(i = 0; i < ROW; i++)
            sum += (data[i][j] * price[j - 1]);
        proarr[j - 1] = sum;
        sum = 0;
    }
        
    printf("(b)\n");
    for(j = 0; j < COL - 1; j++) {
        printf("���~ %c ���P����B�� : %d ��\n", product_name[j], proarr[j]);
	}
    printf("\n");
        
    system("pause");
    return 0;
    
}
