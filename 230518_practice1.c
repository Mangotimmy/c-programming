#include <stdio.h>
#include <stdlib.h>
int main(void) {
	int array[10] = {50, 45, 32, 86, 23, 16, 74, 62, 88, 13};
	int i, k, length, temp;
	length = sizeof(array) / sizeof(array[0]);
	//�L�X��l�}�C�����Ƨ� 
	printf("��l�}�C�����Ƨ�:\n");
	for (i = 0; i < length; i++) {		 
		printf("%d  ", array[i]);
	}
	printf("\n");
	//�i��w�w�ƧǪk 
	for ( k = 0; k < length - 1; k++) {
		for ( i = 0; i < length - 1; i++) {
			if (array[i] > array[i+1]) {
				temp = array[i+1];
				array[i+1] = array[i];
				array[i] = temp;
			}
		}	
	}
	//�L�X�g�L�ƧǪ��}�C 
	printf("�}�C�����g�L�w�w�ƧǪk:\n");
	for (i = 0; i < length; i++) {
		printf("%d  ", array[i]);
	}
	printf("\n");
	
	system("pause");
	return 0;
}





