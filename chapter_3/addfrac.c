#include <stdio.h>

int main(void){
    int a,b,c,d;

    printf("Enter first fraction numerator,denominator\n");
    scanf("%d,%d", &a, &b);
    printf("Enter second fraction numerator,denominator\n");
    scanf("%d,%d", &c, &d);

    printf("Sum of the fractions is equal to: %f", (a / (float) b) + (c / (float) d) );

    return 0;
}
