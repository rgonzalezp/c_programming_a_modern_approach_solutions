#include <stdio.h>

int main(void) {
    float x;
    float function_result;

    printf("Enter x value: ");
    scanf("%f",&x);

    function_result = (((((((((3 * x) + 2) * x) - 5) * x) - 1) * x) + 7) * x ) - 6 ;
    // less multiplications than previous iteration, Horner's Rule.
    printf("y = %.3f\n", function_result);

    return 0;
    
}
