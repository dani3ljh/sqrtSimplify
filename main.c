#include <stdio.h>
#include "sqrt.c"

int main() {
    struct SquareRoot *sqrt = simplifyRadicand(40);
    printSqrt(sqrt);
}