#include <stdio.h>

int main(void) {
    int i,j,k;
    i = 3;
    j = 2;

    printf("%d", i == j ? 0 : ( i > j ? 1 : -1)); // 1
    
}
