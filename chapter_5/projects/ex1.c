#include <stdio.h>

int main(void) {
    int number;

    printf("Enter a number: ");
    scanf("%d",&number);


    (number >= 100) ? printf("The number %d has 3 digits\n",number) : (number >= 10 ) ? printf("The number %d has 2 digits\n",number) : printf("The number %d has 1 digit\n",number) ;

    
    
}
