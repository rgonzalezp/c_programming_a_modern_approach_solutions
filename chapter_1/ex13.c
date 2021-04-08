#include <stdio.h>

int main(void) {
    float x;
    float function_result;

    printf("Enter x value: ");
    scanf("%f",&x);

    function_result = (3 * x * x * x * x * x) + (2 * x * x * x * x) - (5 * x * x * x) - (x * x) + (7 * x) - 6;

    printf("y = %.3f\n", function_result);

    return 0;
    
}
