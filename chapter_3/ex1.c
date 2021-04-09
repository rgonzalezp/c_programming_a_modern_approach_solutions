#include <stdio.h>

int main(void) {

    printf("%6d,%4d\n", 86, 1040);
    //   86,1040
    printf("%12.5e\n", 30.253);
    //3.0253e+01
    printf("%.4f\n", 83.162);
    //83.1620
    printf("%-8.2g", .000009979);
    //1e-05
    

    return 0;
}
