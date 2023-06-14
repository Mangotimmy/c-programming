#include <stdio.h>
#include <stdlib.h>
#define SIZE 25

void count(char str[], int cont[]);

int main(void){

    char userstr[SIZE];
    int aeiou[5] = {0};
    
    printf("輸入一段文字 : ");
    gets(userstr);
    
    count(userstr, aeiou);
    
    printf("字串中包含\n %d個 'a'\n %d個 'e'\n %d個 'i'\n %d個 'o'\n %d個 'u'\n", aeiou[0], aeiou[1], aeiou[2], aeiou[3], aeiou[4]);
    
    system("pause");
    return 0;
    
}

void count(char str[], int cont[]){

    int i = 0;
    
    while(str[i] != '\0')
    {
        switch(str[i])
        {
            case 'a':
            case 'A':
                cont[0] += 1;
                break;
            case 'e':
            case 'E':
                cont[1] += 1;
                break;
            case 'i':
            case 'I':
                cont[2] += 1;
                break;
            case 'o':
            case 'O':
                cont[3] += 1;
                break;
            case 'u':
            case 'U':
                cont[4] += 1;
                break;
            default:
                break;
        }
        i++;
    }
    
}
