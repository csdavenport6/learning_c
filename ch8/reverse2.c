// Name: reverse2.c
// Author: Connor Davenport
// Date: 11/23/21
// Purpose: Reverses a series of numbers using a variable-length array (C99 only)

#include <stdio.h>

int main(void) {
    int i, n;

    printf("How many numbers would you like to reverse? ");
    scanf("%d", &n);

    int a[n];

    printf("Enter %d numbers: ", n);
    for (i = 0; i < n; i++) {
        scanf("%d", &a[i]);
    }

    printf("In reverse order:");
    for (i = n - 1; i >= 0; i--) {
        printf(" %d", a[i]);
    }
    printf("\n");

    return 0;
}