#include <stdio.h>

int main(void){
    int a,b,c,d,e;

    a = 1;

    printf("%d\n",a++ - 1);// "0"
    printf("%d\n",a);// "2"

    a = 10; b = 5;

    printf("%d\n", a++ - ++b);// "4"
    printf("%d %d\n", a, b);// "11 6"

    a = 7; b = 8;

    printf("%d\n", a++ - --b);// "0"
    printf("%d %d\n", a, b);// "8 7"

    a = 3; b = 4; c = 5;

    printf("%d\n", a++ - b++ + --c);// "3"
    printf("%d %d %d\n", 4, 5, 4);// "8 7"

    return 0;
}
