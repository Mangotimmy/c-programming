#include <stdio.h>
#include <time.h>
// �禡�w�q
double average(int* arr, int size) {
    int sum = 0;
    int i;
    for( i = 0; i < size; i++) {
        sum += *(arr + i); // �ϥΫ��йB��l�ӳX�ݼƲդ���
    }
    return (double)sum / size; // �p�⥭����
}

// �D�禡
int main() {
    int arr[10] = {0}; // �w�q�@�ӼƲ�
    int size = 10; // �p��Ʋժ��j�p
	srand(time(NULL));
	printf("�}�C���ƭȬ��G");
	int i; 
	for(i=0; i<size; i++){
		*(arr+i) = rand() %100 +1;
		printf("%d ", *(arr+i));
	}
	printf("\n");
    // �p��å��L������
    printf("������ %.2f\n", average(arr, size));

    return 0;
}

