#include <stdio.h>

int main(void) {
    float income,tax_due;
    printf("Enter your income: ");
    scanf("%f",&income);

    if (income < 750)
        tax_due = income * 0.01;
    else if(income <= 2250)
        tax_due = 7.50f + ((income - 750) * 0.02);
    else if(income <= 3750)
        tax_due = 37.50 + ((income - 2250) * 0.03);
    else if(income <= 5250)
        tax_due = 82.50f + ((income - 3750) * 0.04);
    else if(income <= 7000)
        tax_due = 142.50f + ((income - 5250) * 0.05);
    else if(income > 7000)
        tax_due = 230.00f + ((income - 7000) * 0.06);


    printf("Your income tax due is: %f", tax_due);

    
    
}
