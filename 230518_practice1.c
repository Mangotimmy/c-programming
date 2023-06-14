#include <stdio.h>
#include <stdlib.h>
int main(void) {
	int array[10] = {50, 45, 32, 86, 23, 16, 74, 62, 88, 13};
	int i, k, length, temp;
	length = sizeof(array) / sizeof(array[0]);
	//印出原始陣列元素排序 
	printf("原始陣列元素排序:\n");
	for (i = 0; i < length; i++) {		 
		printf("%d  ", array[i]);
	}
	printf("\n");
	//進行泡泡排序法 
	for ( k = 0; k < length - 1; k++) {
		for ( i = 0; i < length - 1; i++) {
			if (array[i] > array[i+1]) {
				temp = array[i+1];
				array[i+1] = array[i];
				array[i] = temp;
			}
		}	
	}
	//印出經過排序的陣列 
	printf("陣列元素經過泡泡排序法:\n");
	for (i = 0; i < length; i++) {
		printf("%d  ", array[i]);
	}
	printf("\n");
	
	system("pause");
	return 0;
}





