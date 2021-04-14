#include <stdio.h>

int main(void) {
    int highest,lowest,secondhighest,secondlowest,finalH,finalL,first,second,third,fourth;
    printf("Enter four integers (n n n n): ");
    scanf("%d %d %d %d",&first,&second,&third,&fourth);

    if (first > second) {
        highest = first;
        lowest = second;
    } else {
        highest = second;
        lowest = first;
    }

    if (third > fourth) {
        secondhighest = third;
        secondlowest = fourth;
    } else {
        secondhighest = fourth;
        secondlowest = third;
    }

    

    if (highest > secondhighest) {
        finalH = highest;
    } else {
        finalH = secondhighest;
    }

    if (lowest < secondlowest) {
        finalL = lowest;
    } else {
        finalL = secondlowest;
    }


    printf("Largest: %d\n", finalH);
    printf("Smallest: %d\n", finalL);

    
    
}
