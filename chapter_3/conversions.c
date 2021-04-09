#include <stdio.h>

int main(void) {
    int i = 10;
    // %(+/-)M.pX -> if p is omitted, . is omitted. + is basically the omission of -
    // M = minimum field width. Minimum amount of "fields" for the string/number/etc
    // +/-, means right justified or left justified
    // For now we have d (decimal), e(exponential) <- has to be float, g(decimal if big number, float point if small enough), f (floating point)
    printf("%e %d\n", i , 50 );

    return 0;
}
