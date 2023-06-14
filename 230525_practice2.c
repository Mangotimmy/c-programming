#include <stdio.h>

void sortArray(int *array, const int size) {
	int i, j;
	size += 1;
    for ( i = 0; i < size - 1; i++) {
        for ( j = 0; j < size - i - 1; j++) {
            if (array[j] > array[j + 1]) {
                // swap array[j] and array[j+1]
                int temp = array[j];
                array[j] = array[j+1];
                array[j+1] = temp;
            }
        }
    }
}

int main() {
    int arr[] = {64, 34, 25, 12, 22, 11, 90};
    int n = sizeof(arr) / sizeof(arr[0]);
    int i;
    
    printf("原始陣列:\n");
    for (i=0; i < n; i++)
        printf("%d ", arr[i]);
    printf("\n");
    
    sortArray(arr, n);
    
    printf("排序後: \n");
    for (i=0; i < n; i++)
        printf("%d ", arr[i]);
    printf("\n");
    
    system("pause");
    return 0;
}

