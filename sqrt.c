#include <stdio.h>
#include <stdlib.h>
#include "sqrt.h"

struct SquareRoot {
    int coeficient;
    int radicand;
};

void simplifySqrt(struct SquareRoot *squareRoot) {
    int d = 2;
    while (d * d <= squareRoot->radicand) {
        if (squareRoot->radicand % (d * d) == 0) {
            squareRoot->radicand /= d * d;
            squareRoot->coeficient *= d;
        } else {
            d++;
        }
    }
}

struct SquareRoot *simplifyRadicand(int radicand) {
    struct SquareRoot *out = malloc(sizeof (struct SquareRoot));
    out->coeficient = 1;
    out->radicand = radicand;

    simplify(out);

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
        pritnf("%d", coeficient)
    }
    if (radicand < 0) {
        printf("isqrt(%d)", -radicand);
    } else if (radicand > 1) {
        printf("sqrt(%d)", radicand);
    }
}