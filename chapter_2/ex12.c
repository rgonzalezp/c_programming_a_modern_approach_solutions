#include <stdio.h>

#define TAXATION 0.05

int main(void) {
    float amount;
    float final_amount;

    printf("Enter an amount: ");
    scanf("%f",&amount);

    final_amount = amount +  (amount * TAXATION);

    printf("With tax added: %.2f\n", final_amount);

    return 0;
    
}
