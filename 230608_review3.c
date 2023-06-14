#include <stdio.h>

void decimalToBinary(int num);

int main() {
    while(1){ 
    int num;
    printf("請輸入一個十進位數字：");
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
    int binary[32]; // 儲存2進位表示的陣列
    int index = 0;  // 用於追蹤陣列索引
	int i;
    // 將數字轉換為2進位表示
    while (num > 0) {
        binary[index] = num % 2;
        num = num / 2;
        printf("%d\n",num);
        index++;
    }

    // 印出2進位表示
    printf("二進位表示為：");
    for (i = index - 1; i >= 0; i--) {
        printf("%d", binary[i]);
    }
    printf("\n");
}


