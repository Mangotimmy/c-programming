#include <stdio.h>

void decimalToBinary(int num);

int main() {
    while(1){ 
    int num;
    printf("�п�J�@�Ӣ̶i��Ʀr�G");
    scanf("%d", &num);
    if(num == 0){
        printf("do you want to continue ?");
        scanf("%d", &num);
        if (num == 1){
            goto esc;
        }
        printf("programme have stopped successfully\n");
        return 0;
    }
    esc:
    decimalToBinary(num);
    }
   
}


void decimalToBinary(int num) {
    int binary[32]; // �x�s2�i���ܪ��}�C
    int index = 0;  // �Ω�l�ܰ}�C����
	int i;
    // �N�Ʀr�ഫ��2�i����
    while (num > 0) {
        binary[index] = num % 2;
        num = num / 2;
        printf("%d\n",num);
        index++;
    }

    // �L�X2�i����
    printf("�G�i���ܬ��G");
    for (i = index - 1; i >= 0; i--) {
        printf("%d", binary[i]);
    }
    printf("\n");
}


