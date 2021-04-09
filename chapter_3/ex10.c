#include <stdio.h>

int main(void) {

    int phonearea,phoneprefix,phoneline;
    printf("Enter phone number [ (xxx) xxx-xxxx] :");
    scanf("(%d) %d-%d",&phonearea,&phoneprefix,&phoneline);
    printf("You entered %d.%d.%d\n", phonearea,phoneprefix,phoneline);
    
    
    return 0;
}
