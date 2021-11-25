// Name: innerproduct.c
// Author: Connor Davenport
// Date: 11/25/21
// Purpose: Computes the inner product of two arrays of doubles

#include <stdio.h>

#define N 5

double inner_product(double a[], double b[], int n);

int main(void) {
    int i;
    double a[N], b[N];

    printf("Enter %d numbers for the first array: ", N);
    for (i = 0; i < N; i++) {
        scanf("%lf", &a[i]);
    }

    printf("Enter %d numbers for the second array: ", N);
    for (i = 0; i < N; i++) {
        scanf("%lf", &b[i]);
    }

    printf("The inner product of these two arrays is %.2lf.\n", inner_product(a, b, N));

    return 0;
}


double inner_product(double a[], double b[], int n) {
    int i = 0;
    double ip = 0.0;

    for (i = 0; i < n; i++) {
        ip += a[i] * b[i];
    }

    return ip;
}