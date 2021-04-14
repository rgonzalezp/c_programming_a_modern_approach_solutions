#include <stdio.h>

int main(void) {
    int hours,minutes;

    printf("Enter a 24-hour time (00:00): ");
    scanf("%d:%d",&hours,&minutes);


    hours == 24 ? printf("Equivalent 12 hours time: %d:%d AM", hours-12,minutes): hours < 12 ? printf("Equivalent 12 hours time: %d:%d AM", hours,minutes) : hours == 12 ? printf("Equivalent 12 hours time: %d:%d PM", hours,minutes) :printf("Equivalent 12 hours time: %d:%d PM", hours-12,minutes);
    
    
}
