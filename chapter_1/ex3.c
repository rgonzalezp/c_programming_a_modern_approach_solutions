#include <stdio.h>

int main(void)
{
    int height = 12, length = 10, width = 8, volume;

    volume = height * length * width;

    printf("Dimensions: %dx%dx%d \n",height,width,length);
    printf("Volume (cubic inches) : %d \n", volume);
    printf("Dimensional weight (pounds): %d \n", (volume + 165) / 166);

    return 0;
}
