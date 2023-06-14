#include <stdio.h>
#include <time.h>
// 函式定義
double average(int* arr, int size) {
    int sum = 0;
    int i;
    for( i = 0; i < size; i++) {
        sum += *(arr + i); // 使用指標運算子來訪問數組元素
    }
    return (double)sum / size; // 計算平均值
}

// 主函式
int main() {
    int arr[10] = {0}; // 定義一個數組
    int size = 10; // 計算數組的大小
	srand(time(NULL));
	printf("陣列的數值為：");
	int i; 
	for(i=0; i<size; i++){
		*(arr+i) = rand() %100 +1;
		printf("%d ", *(arr+i));
	}
	printf("\n");
    // 計算並打印平均值
    printf("平均為 %.2f\n", average(arr, size));

    return 0;
}

