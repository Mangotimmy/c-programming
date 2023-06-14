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
    
    printf("某公司有 A、B、C、D 和 E 等五種產品，其單價個別為 12、16、10、14 與 15 元；\n該公司三位銷售員某月份銷售量如下 : \n\n");
    printf("商品金額");
	for(i = 0; i <5; i++) {
    	printf("%d元\t", price[i]);
	}
	printf("\n");
    printf("銷售員\t產品A\t產品B\t產品C\t產品D\t產品E\n");

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
        printf("銷售員 %d 號的銷售總金額為 : %d 元\n", i + 1, manarr[i]);
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
        printf("產品 %c 的銷售金額為 : %d 元\n", product_name[j], proarr[j]);
	}
    printf("\n");
        
    system("pause");
    return 0;
    
}
