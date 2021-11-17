// Name: square2.c
// Author: Connor Davenport 
// Date: 11/17/21
// Purpose: Better version of square.c that uses a for loop instead of a while loop

#include <stdio.h>

int main(void) {
    int i, n;

    printf("This program prints a table of squares.\n");
    printf("Enter number of entries in table: ");
    scanf("%d", &n);

    for (i = 1; i <= n; i++) {
        printf("%10d%10d\n", i, i * i);
    }

    return 0;
}