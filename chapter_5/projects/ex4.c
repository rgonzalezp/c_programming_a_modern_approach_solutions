#include <stdio.h>

int main(void) {
    float windspeed;
    printf("Enter wind speed: ");
    scanf("%f",&windspeed);

    if (windspeed > 63)
        printf("Hurricane");
    else if(windspeed >= 48)
        printf("Storm");
    else if(windspeed >= 28)
        printf("Gale");
    else if(windspeed >= 4)
        printf("Breeze");
    else if(windspeed >= 1)
        printf("Light air");
    else
        printf("Calm");

    
    
}
