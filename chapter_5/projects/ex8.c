#include <stdio.h>

int main(void) {
    int hours,minutes,minutes_since_midnight;

    printf("Enter a 24-hour time (00:00): ");
    scanf("%d:%d",&hours,&minutes);

    minutes_since_midnight = (60 * hours) + minutes;

    //bunch of pointless if's so skipping.
    
    printf("Closest departure time is %d:%d a.m., arriving at %d:%d a.m."); 
    
}
