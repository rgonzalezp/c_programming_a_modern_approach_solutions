#include <stdio.h>

int main(void){
    int a,b,c,d,e;

    a = 7;
    b = 8;

    a *= b + 1;

    printf("%d %d\n",a,b);// "63 8"

    a = b = c = 1;
    a += b += c;

    printf("%d %d %d\n", a,b,c);// "3 2 1"

    a = 1; b = 2; c = 3;
    a -= b -= c;
    printf("%d %d %d\n",a,b, c);// "2 -1 3"

    a = 2; b = 1; c = 0;
    a *= b *= c;
    printf("%d %d %d\n", a,b,c);// "0 0 0"

    return 0;
}
