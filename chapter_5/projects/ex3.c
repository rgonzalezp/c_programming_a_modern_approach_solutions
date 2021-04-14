/* Calculates a broker's commission */

#include <stdio.h>

int main(void)
{
    float commission,value,number,commission_rival;

    printf("Enter value of shares and number of shares (number,number): ");
    scanf("%f,%f", &value,&number);

    if (value < 2500.00f)
        commission = 30.00f + .017f * (value*number);
    else if (value < 6250.00f)
        commission = 56.00f + 0.0066f * (value*number);
    else if (value < 20000.00f)
        commission = 100.00f + .0022f * (value*number);
    else if (value < 500000.00f)
        commission = 155.00f + .0011f * (value*number);
    else
        commission = 255.00f + 0.0009f * (value*number);

    if (commission < 39.00f)
        commission = 39.00f;

    if (number < 2000 && number > 0) {
        commission_rival = 33 + (0.03 * number);
    } else {
        commission_rival = 33 + (0.02 * number);
    }

    printf("Commission: $%.2f\n", commission);
    printf("Commission Rival: $%.2f\n", commission_rival);
    
    return 0;
}
