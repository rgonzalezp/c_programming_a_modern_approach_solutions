#include <stdio.h>

int main(void) {
    int age;
    age = 10;
    _Bool teenager;

    if (age >= 13)
        if (age <= 19)
            teenager = 1;
        else
            teenager = 0;
    else if (age < 13)
        teenager = 0;

    ((age <= 19) && (age >= 13)) ? teenager = 1 : teenager = 0;

    
    
}
