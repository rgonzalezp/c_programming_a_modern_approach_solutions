#include <stdio.h>

int main(void){
    int a,b;

    a = 2; b = 2;

    printf("%d\n", a++); a=2;
    printf("%d\n", ++a); a=2;
    printf("%d\n", a+=1); a=2; // ++a is the same as a+=1 because they both return 3 on runtime
    return 0;
}
