#include <stdio.h>
#include <time.h>
#define SIZE 10
void findMid(const int *array);

int main(void) {
    int data[SIZE] = {0};
    int *ptr = data;
    int i;
    
	printf("陣列的數值為：");
	srand(time(NULL));
	for(i=0; i<SIZE; i++){
		*(ptr+i) = rand() %100 +1;
		printf("%d ", *(ptr+i));
	}
	printf("\n");
	
	findMid(data);

    return 0;
}


void findMid(const int *array) {
	int i;
	int total = 0;
	for (i = 0; i < SIZE; i++) {
		total = total + array[i];
	}
	double average= (double)total/SIZE;
	printf("平均值：%.1f\n", average);
	int mid = array[0];								//先假設第一個元素為最接近平均值 
	double delta = fabs((double)array[0] - average);	//計算與平均值的差值 
	double newdelta = 0.0;								//宣告另一個計算每個元素與平均值差值的變數 
	for (i = 0; i < SIZE; i++) {
		newdelta = fabs((double)array[i] - average);
		if (newdelta < delta) {						//利用if語法判斷如果新的差值比舊的小
			mid = array[i];							//將mid項儲存新的元素
			delta = newdelta;						//更新差值以繼續比較
		}
	}
	printf("最靠近平均值為：%d", mid);
}
