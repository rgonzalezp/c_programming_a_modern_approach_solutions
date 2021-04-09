#include <stdio.h>

int main(void){
    int a,b,c,d;

    printf("Enter two fractions separated by a plus sign: numerator/denominator+numerator/denominator\n");
    scanf("%d/%d+%d/%d", &a, &b, &c, &d);

    printf("Sum of the fractions is equal to: %f", (a / (float) b) + (c / (float) d) );

    return 0;
}
