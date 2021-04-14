#include <stdio.h>

int main(void){
    int a,c,e,g,i;
    int b,d,f,h,j;
    int first;
    int f_sum,s_sum, check,final_check;

    printf("Enter the first (single digit): ");
    scanf("%1d", &first);

    printf("Enter first group of five digits: ");
    scanf("%1d%1d%1d%1d%1d",&a,&c,&e,&g,&i);

    printf("Enter second group of five digits: ");
    scanf("%1d%1d%1d%1d%1d",&b,&d,&f,&h,&j);

    f_sum = first + c + g + b + f + j;
    s_sum = a + e + i + d + h;

    check = (3 * f_sum) + s_sum;

    final_check = 9 - ((check-1) % 10);

    if (final_check > 0 && final_check < 10) {
        printf("VALID UPC\n");
        printf("Check digit: %d\n", final_check );
    } else {
        printf("INVALID UPC");
    }
    

    return 0;
}
