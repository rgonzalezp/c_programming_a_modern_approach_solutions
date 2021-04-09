#include <stdio.h>

int main(void){
    int a,b,c,d,e;

    a = 5;
    b = 3;

    printf("%d %d\n",a/b, a%b);// "1 2"

    a = 2; b = 3;

    printf("%d\n", (a + 10)% b);// "0"

    a = 7; b = 8; c = 9;
    printf("%d\n",(a + 10) % c / b);// "1"

    a = 1; b = 2; c = 3;
    printf("%d\n",(a + 5) % (b + 2) / c);// "0"

    return 0;
}
