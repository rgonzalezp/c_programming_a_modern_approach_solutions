#include <stdio.h>

int main(void) {

    int number,fdigit,sdigit,tdigit;
    printf("Enter a three-digit number: ");
    scanf("%d",&number);
    printf("The reversal is: %d%d%d\n", tdigit = number % 10,sdigit = number % 100 / 10, fdigit = number / 100);
    
    
    return 0;
}
