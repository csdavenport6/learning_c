// Name: palindrome.c
// Author: Connor Davenport
// Date: 12/6/21
// Purpose: Checks whether a message entered from the user is a palindrome or not 

#include <stdio.h>

#define N 100

int main(void) {
    char a[N], ch, *e = a, *f = a;

    printf("Enter a message: ");
    while ((ch = getchar()) != '\n') 
        *e++ = ch;

    while (e > &a[0]) {
        if (*--e != *f++) {
            printf("Not a palindrome.\n");
            return 0;
        }
    }

    printf("Palindrome.\n");

    return 0;
}