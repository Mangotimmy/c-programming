#include <stdio.h>
#include <string.h>

void reverse(const char* input, char* output) {
    int length = strlen(input);
    int i;
    for( i = 0; i < length; i++) {
        output[i] = input[length - 1 - i];
    }
    output[length] = '\0'; // 結尾加上空字元 
}

int main() {
    char original[] = "Hello world!";
    int size = 0;
    size = strlen(original);
    char reversed[size];  

    reverse(original, reversed);
    printf("原始字串: %s\n\n倒轉字串: %s\n", original, reversed);
    
    int i;
    for (i = 0; i < size; i++) {
    	printf("%c", original[i]);
	}
	printf("\n");
	for (i = 0; i < size; i++) {
    	printf("%c", reversed[i]);
	}
	
    return 0;
}



