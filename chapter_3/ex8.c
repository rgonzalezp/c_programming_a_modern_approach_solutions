#include <stdio.h>

int main(void) {

    int month,day,year;
    int number;
    float price;

    printf("Enter item number: ");
    scanf("%d",&number);

    printf("Enter unit price: ");
    scanf("%f",&price);

    printf("Enter a date (mm/dd/yyyy) : ");
    scanf("%d/%d/%d",&month,&day,&year);

    printf("Item\tUnit \t\tPurchase\n");
    printf("    \tPrice\t\tDate\n");
    printf("%-8d$%8.2f\t%-2.2d/%-2.2d/%4d",number,price,month,day,year);
    
    return 0;
}
