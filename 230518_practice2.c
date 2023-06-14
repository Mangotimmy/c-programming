#include <stdio.h>
#include <stdlib.h>

int main(void){

    int a = 12, b = 7;
    int *pointer;
    
    printf("變數a地址:%d\n", &a);
    printf("變數b地址:%d\n\n", &b);    
    
    pointer = &a;
    printf("pointer = &a:  a=%d\tb=%d\tpointer=%d\t*pointer=%d\n\n", a, b, pointer, *pointer);
    *pointer = 19;
    printf("*pointer = 19: a=%d\tb=%d\tpointer=%d\t*pointer=%d\n\n", a, b, pointer, *pointer);
    pointer = &b;
    printf("pointer = &b:  a=%d\tb=%d\tpointer=%d\t*pointer=%d\n\n", a, b, pointer, *pointer);
    b = 16;
    printf("b = 16:        a=%d\tb=%d\tpointer=%d\t*pointer=%d\n\n", a, b, pointer, *pointer);
    *pointer = 12;
    printf("*pointer = 12: a=%d\tb=%d\tpointer=%d\t*pointer=%d\n\n", a, b, pointer, *pointer);
    a =17;
    printf("a =17:         a=%d\tb=%d\tpointer=%d\t*pointer=%d\n\n", a, b, pointer, *pointer);
    pointer = &a;
    printf("pointer = &a:  a=%d\tb=%d\tpointer=%d\t*pointer=%d\n\n", a, b, pointer, *pointer);
    a = b;
    printf("a = b:         a=%d\tb=%d\tpointer=%d\t*pointer=%d\n\n", a, b, pointer, *pointer);
    *pointer = 63;
    printf("*pointer = 63: a=%d\tb=%d\tpointer=%d\t*pointer=%d\n\n", a, b, pointer, *pointer);

    
    system("pause");
    return 0;

}
