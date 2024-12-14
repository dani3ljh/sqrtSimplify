#include <stdio.h>
#include "sqrt.c"

int main() {
    struct SquareRoot *obj = simplifyRadicand(40);
    printSqrt(obj);
}