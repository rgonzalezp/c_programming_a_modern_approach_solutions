#include <stdio.h>
#include <math.h>

#define VOLUME_PROPORTION 4.0f/3.0f //If you remove the float part, the division rounds down to 1 and gives the incorrect answer (pi * rcubed)

int main(void) {
    float radius = 10.0; //result is exactly the same with int or float, but use float for good measure
    float volume;

    volume = VOLUME_PROPORTION * M_PI * radius * radius * radius;

    printf("Sphere with radius 10 has a volume of : %.3f\n", volume);

    return 0;
    
}
