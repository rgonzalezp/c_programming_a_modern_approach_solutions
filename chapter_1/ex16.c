#include <stdio.h>

int main(void) {
    float loan, interest_rate, monthly_payment, balance = 0.0;

    printf("Enter amount of loan: ");
    scanf("%f",&loan);
    printf("Enter interest rate: ");
    scanf("%f",&interest_rate);
    printf("Enter monthly payment: ");
    scanf("%f",&monthly_payment);
    
    interest_rate = interest_rate / 100 / 12;
    // Author doesn't specify that the interest is annual and only in the hints suggests to calculate the monthly interest, assuming the user is entering annual interest.

    balance = (loan * interest_rate) + loan - monthly_payment;

    printf("Balance remaining after first payment: %.3f\n", balance);

    balance = (balance * interest_rate) + balance - monthly_payment;

    printf("Balance remaining after second payment: %.3f\n", balance);

    balance = (balance * interest_rate) + balance - monthly_payment;

    printf("Balance remaining after third payment: %.3f\n", balance);

    return 0;
    
}
