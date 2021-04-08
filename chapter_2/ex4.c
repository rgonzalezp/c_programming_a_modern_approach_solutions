#include <stdio.h>

int main(void)
{
    int  length, width, volume, onemore;
    float height2, length2, width2, volume2;
    //At least in my computer there seems to be a pattern.
    //e.g first 2 numbers always have a different of +16 in their respective values
    //the third number is very close in number (usually around 280-290)
    //the rest of the numbers, no matter how many you add, all are 0 or 0.0
    
    printf("Ints: %dx%dx%dx%d \n", width, length, volume, onemore);
    printf("Floats: %fx%fx%fx%f \n",height2,width2,length2, volume2);

    return 0;
}
