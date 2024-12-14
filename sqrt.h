#ifndef sqrt
#define sqrt

struct SquareRoot {
    int coeficient;
    int radicand;
};

// simplifies sqrt
void simplifySqrt(struct SquareRoot *squareRoot);

// simplifies sqrt
struct SquareRoot *simplifyRadicand(int radicand);

// prints "2sqrt(2)"
void printSqrt(struct SquareRoot *squareRoot);

#endif