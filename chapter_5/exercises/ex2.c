#include <stdio.h>

int main(void) {
    int i,j,k;
    i = 10;
    j = 5;

    printf("%d %d\n", !i < j, !i ); // 1 0
    i = 2;
    j = 1;
    printf("%d %d\n", !!i + !j, !!i ); // 1 1
    i = 5;
    j = 0;
    k = -5;
    printf("%d %d\n", i && j || k, i && j); // 1 // || checks for zero or non-zero (-5 passes as true)
    i = 1;
    j = 2;
    k = 3;
    printf("%d", i < j || k); // 1

}
