// Name: rev-message.c
// Author: Connor Davenport
// Date: 12/6/21
// Purpose: Reverses a message entered by the user

#include <stdio.h>

#define N 100

int main(void) {
    char a[N];
    char ch, *p = a;

    printf("Enter a message: ");
    while ((ch = getchar()) != '\n') 
        *p++ = ch;
   
    printf("Reversal is: ");
    while (p > &a[0])
        printf("%c", *--p);

    printf("\n");

    return 0;
}