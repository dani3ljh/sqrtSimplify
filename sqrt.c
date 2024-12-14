#include <stdio.h>
#include <stdlib.h>
#include "sqrt.h"

void simplifySqrt(struct SquareRoot *squareRoot) {
    int i = 2;
    while (i * i <= squareRoot->radicand) {
        if (squareRoot->radicand % (i * i) == 0) {
            squareRoot->radicand /= i * i;
            squareRoot->coeficient *= i;
        } else {
            i++;
        }
    }
}

struct SquareRoot *simplifyRadicand(int radicand) {
    struct SquareRoot *out = malloc(sizeof (struct SquareRoot));
    out->coeficient = 1;
    out->radicand = radicand;

    simplifySqrt(out);

    return out; 
}

void printSqrt(struct SquareRoot *squareRoot) {
    int coeficient = squareRoot->coeficient;
    int radicand = squareRoot->radicand;

    if (radicand == 0 || coeficient == 0) {
        printf("0");
        return;
    }
    if (coeficient != 1) {
        printf("%d", coeficient);
    }
    if (radicand < 0) {
        printf("isqrt(%d)", -radicand);
    } else if (radicand > 1) {
        printf("sqrt(%d)", radicand);
    }
}