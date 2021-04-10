#include <stdio.h>

int main(void){
    int a,b,c,d,e;

    a = 5;
    b = ++a * 3 - 2;

    printf("%d %d\n",a,b);// "6 16"

    a = 5;
    b = 3 - 2 * a++;

    printf("%d %d\n", a,b);// "6 -7"

    a = 7;
    b = 3 * a-- + 2;
    printf("%d %d\n",a,b);// "6 23"

    a = 7;
    b = 3 + --a * 2;
    printf("%d %d\n", a,b);// "6 15"

    return 0;
}
