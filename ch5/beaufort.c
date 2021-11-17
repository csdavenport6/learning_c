// Name: beaufort.c
// Author: Connor Davenport
// Date: 11/15/21
// Purpose: Print out a description of a wind speed entered in knots

#include <stdio.h>

int main(void) {
    int wind;

    printf("Enter a wind speed in knots: ");
    scanf("%d", &wind);
    printf("This is a ");
    if (wind < 1) printf("calm wind.\n");
    else if (wind >= 1 && wind <= 3) printf("light wind.\n");
    else if (wind >= 4 && wind <= 27) printf("breeze.\n");
    else if (wind >= 28 && wind <= 47) printf("gale.\n");
    else if (wind >= 48 && wind <= 63) printf("stoem.\n");
    else printf("hurricane.\n");


    return 0;
}