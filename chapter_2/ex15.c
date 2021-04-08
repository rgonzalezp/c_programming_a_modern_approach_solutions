#include <stdio.h>

int main(void) {
    int dollar_target;
    int twenty,ten,five,one;
    int remainder;

    printf("Enter a dollar amount: ");
    scanf("%d",&dollar_target);

    twenty = dollar_target/ 20;
    dollar_target -= (twenty * 20);
    ten = dollar_target/ 10;
    dollar_target -= (ten * 10);
    five = dollar_target/ 5;
    dollar_target -= (five * 5);
    one = dollar_target/ 1;
    dollar_target -= (one * 1);
    
    printf("$20 bills: %d\n", twenty);
    printf("$10 bills: %d\n", ten);
    printf(" $5 bills: %d\n", five);
    printf(" $1 bills: %d\n", one);

    return 0;
    
}
