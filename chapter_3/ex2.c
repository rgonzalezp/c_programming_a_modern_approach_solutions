#include <stdio.h>

int main(void) {

    float j = 10.034;
    printf("|%8.1e|\n", j);
    printf("|%-10.6e|\n",j);
    printf("|%8.3f|\n",j);
    printf("|%-6.0f|\n",j);
    
    return 0;
}
