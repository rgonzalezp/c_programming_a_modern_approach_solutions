#include <stdio.h>

int main(void) {

    int fdigit,sdigit,tdigit;
    printf("Enter a three-digit number: ");
    scanf("%1d%1d%1d",&fdigit,&sdigit,&tdigit);
    printf("The reversal is: %d%d%d\n", tdigit,sdigit,fdigit);
    
    
    return 0;
}