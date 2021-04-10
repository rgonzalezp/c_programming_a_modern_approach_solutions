#include <stdio.h>

int main(void){
    int a,c,e,g,i;
    int b,d,f,h,j;
    int first,last;
    int f_sum,s_sum, check;

    printf("Enter the first 12 digits of an EAN: ");
    scanf("%1d%1d%1d%1d%1d%1d%1d%1d%1d%1d%1d%1d", &first,&a,&c,&e,&g,&i,&b,&d,&f,&h,&j,&last);


    f_sum = a + e + i + d + h + last; 
    s_sum = first + c + g + b + f + j;

    check = (3 * f_sum) + s_sum;

    printf("Check digit: %d\n", 9 - ((check-1) % 10) );

    return 0;
}
