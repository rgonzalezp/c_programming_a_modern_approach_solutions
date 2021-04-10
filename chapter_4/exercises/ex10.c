#include <stdio.h>

int main(void){
    int a,b,c,d,e;

    a = 6;
    b = a += a;

    printf("%d %d\n",a,b);// "12 12"

    a = 5;
    b = (a -=2) + 1;

    printf("%d %d\n", a,b);// "3 4"

    a = 7;
    b = 6 + (a = 2.5);
    printf("%d %d\n",a,b);// "2 8"

    a = 2; b = 8; 
    b = (a = 6) + (b = 3);
    printf("%d %d\n", a,b);// "6 9"

    return 0;
}
