#include <stdio.h>
#include <time.h>
#define SIZE 10
void findMid(const int *array);

int main(void) {
    int data[SIZE] = {0};
    int *ptr = data;
    int i;
    
	printf("�}�C���ƭȬ��G");
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
	printf("�����ȡG%.1f\n", average);
	int mid = array[0];								//�����]�Ĥ@�Ӥ������̱��񥭧��� 
	double delta = fabs((double)array[0] - average);	//�p��P�����Ȫ��t�� 
	double newdelta = 0.0;								//�ŧi�t�@�ӭp��C�Ӥ����P�����Ȯt�Ȫ��ܼ� 
	for (i = 0; i < SIZE; i++) {
		newdelta = fabs((double)array[i] - average);
		if (newdelta < delta) {						//�Q��if�y�k�P�_�p�G�s���t�Ȥ��ª��p
			mid = array[i];							//�Nmid���x�s�s������
			delta = newdelta;						//��s�t�ȥH�~����
		}
	}
	printf("�̾a�񥭧��Ȭ��G%d", mid);
}
