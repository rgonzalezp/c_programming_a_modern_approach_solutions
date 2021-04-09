#include <stdio.h>

int main(void) {

    int i,j;
    float x;

    scanf("%d%f%d", &i, &x, &j);

    printf("|%d|%f|%d|",i,x,j);
    //|10|0.300000|5| (10, 0.3 and 5)
    return 0;
}
