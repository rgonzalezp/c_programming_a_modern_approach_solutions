#include <stdio.h>

int main(void) {
    int i;

    i = 1;

    switch (i % 3) {
        case 0: printf("zero");
        case 1: printf("one \t");
        case 2: printf("two");
    } // It will print both one and two. It passes the case 1, and then falls through execution because there is not break;
}
