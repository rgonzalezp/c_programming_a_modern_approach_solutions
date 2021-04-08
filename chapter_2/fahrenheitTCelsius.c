#include <stdio.h>
#define FREEZING_PT 32.0f
#define PROPORTION (5.0f/ 9.0f)

int main(void) {

    float Farenheit;
    printf("Enter Farenheit Temp: ");
    scanf("%f",&Farenheit);

    printf("Celsius equivalent: %.1f \n", (Farenheit - FREEZING_PT) * PROPORTION);
    return 0;
}
