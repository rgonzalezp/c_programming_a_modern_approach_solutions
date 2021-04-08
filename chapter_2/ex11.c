#include <stdio.h>
#include <math.h>

#define VOLUME_PROPORTION 4.0f/3.0f 

int main(void) {
    float radius;
    float volume;

    printf("Enter radius value:");
    scanf("%f",&radius);

    volume = VOLUME_PROPORTION * M_PI * radius * radius * radius;

    printf("Sphere with radius 10 has a volume of : %.3f\n", volume);

    return 0;
    
}
