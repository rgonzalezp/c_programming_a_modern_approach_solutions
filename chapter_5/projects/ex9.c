#include <stdio.h>

int main(void)
{
    int d1, m1, y1, d2, m2, y2,daysone,daystwo;

    printf("Enter first date (mm/dd/yy): ");
    scanf("%d/%d/%d", &m1, &d1, &y1);

    printf("Enter second date (mm/dd/yy): ");
    scanf("%d/%d/%d", &m2, &d2, &y2);

    daysone = (365 * y1 ) + (30 * m1 ) + d1;
    daystwo = (365 * y2 ) + (30 * m2 ) + d2;

    if (daysone < daystwo) {
        printf("%d/%d/%d is earlier than %d/%d/%d", m1, d1, y1, m2, d2, y2);
    } else {
        printf("%d/%d/%d is earlier than %d/%d/%d", m2, d2, y2, m1, d1, y1);
    }
    //bunch of pointless if's so skipping.
}
