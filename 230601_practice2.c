#include <stdio.h>
#include <time.h>
#define SIZE 10

int main() {
    int data[SIZE] = {0};

    int *p = &data;
    int max;
    int i;
	printf("�}�C���ƭȬ��G");
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
    printf("\n\n�̤j�� = %d\n", max);

    return 0;
}

