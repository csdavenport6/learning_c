// Name: digits.c
// Author: Connor Davenport
// Date: 11/14/21
// Purpose: Calculates how many digits a positive integer contains using if statements

#include <stdio.h>

int main(void)
{
    int num;

    printf("Enter a number: ");
    scanf("%d", &num);

    printf("The number %d ", num);
    if      (num >= 0    && num < 9)    printf("has 1 digit.\n");
    else if (num >= 10   && num < 99)   printf("has 2 digits.\n");
    else if (num >= 100  && num < 999)  printf("has 3 digits.\n");
    else if (num >= 1000 && num < 9999) printf("has 4 digits.\n");
    else printf("is invalid.\n");

    return 0;
}