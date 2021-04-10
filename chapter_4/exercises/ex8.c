#include <stdio.h>

int main(void){
    int a,c,e,g,i;
    int b,d,f,h,j;
    int first;
    int f_sum,s_sum, check;

    printf("Enter the first (single digit): ");
    scanf("%1d", &first);

    printf("Enter first group of five digits: ");
    scanf("%1d%1d%1d%1d%1d",&a,&c,&e,&g,&i);

    printf("Enter second group of five digits: ");
    scanf("%1d%1d%1d%1d%1d",&b,&d,&f,&h,&j);

    f_sum = first + c + g + b + f + j;
    s_sum = a + e + i + d + h;

    check = (3 * f_sum) + s_sum;

    printf("Check digit: %d\n", 9 - ((check-1) % 10) );
    
    printf("Check digit: %d\n", (10 - (check % 10)) % 10 );// would this work?
    // On the far fetch case that the total value is 0, the check digit would yield a 10, which is invalid?

    return 0;
}
