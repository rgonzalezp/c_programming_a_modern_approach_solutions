#include <stdio.h>

int main(void){
    int a,b;

    a = 2; b = 2;

    printf("%d", (-a)/b); // Not necessarily, depending on the compiler implmementation (89 or 99) this division might yield varying results
    printf("%d", -(a/b)); // this always gives the same result. Evaluates a/b and then uses the unary operator to the result

    return 0;
}
