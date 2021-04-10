#include <stdio.h>

int main(void){
    int a,b;

    a = 1; b = 2;

    a += b;
    printf("%d %d\n", a,b); //3 2 
    a = 1; b = 2;
    a--;
    printf("%d %d\n", a,b);//0 2
    a = 1; b = 2;
    a * b / a;
    printf("%d %d\n", a,b);//1 2
    a = 1; b = 2;
    a % ++b;
    printf("%d %d\n", a,b);//1 3
    return 0;
}
