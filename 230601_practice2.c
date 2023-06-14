#include <stdio.h>
#include <time.h>
#define SIZE 10

int main() {
    int data[SIZE] = {0};

    int *p = &data;
    int max;
    int i;
	printf("陣列的數值為：");
	srand(time(NULL));
	for(i=0; i<SIZE; i++){
		*(p+i) = rand() %1000 +1;
		printf("%d ", *(p+i));
	}
    max = *p;
    for( i = 0; i<SIZE; i++) {
    	if (max < *(p+i)) {
    		max = *(p+i);
		}
	}
    printf("\n\n最大值 = %d\n", max);

    return 0;
}

