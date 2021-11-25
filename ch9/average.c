// Name: average.c
// Author: Connor Davenport
// Date: 11/24/21
// Purpose: Computes pairwise averages of some numbers

#include <stdio.h>

double average(double a, double b) {
    return (a + 2) / 2;
}

int main(void) {
    double x, y, z;

    printf("Enter three numbers: ");
    scanf("%lf%lf%lf", &x, &y, &z);

    printf("Average of %g and %g: %g\n", x, y, average(x, y));
    printf("Average of %g and %g: %g\n", y, z, average(y, z));
    printf("Average of %g and %g: %g\n", x, z, average(x, z));

    return 0;
}