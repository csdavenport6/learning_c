// Name: reverse.c
// Author: Connor Davenport 
// Date: 11/22/21
// Purpose: Reverses a series of numbers entered by the user

#include <stdio.h>

#define N 10

int main(void) {
    int a[N], i;

    printf("Enter %d numbers: ", N);
    for (i = 0; i < N; i++) {
        scanf("%d", &a[i]);
        
    }
    printf("In reverse order:");
    for (i = N - 1; i >= 0; i--) {
        printf(" %d", a[i]);
    } 

    printf("\n");
    return 0;
}