// Name: words.c
// Author: Connor Davenport
// Date: 12/9/21
// Purpose: Finds the smallest and largest words entered by the user

#include <stdio.h>
#include <string.h>

#define MAX_LEN 20 /* max word length */

int read_line(char *str, int n);

int main(void) {
    char smallest[MAX_LEN], largest[MAX_LEN] = "", current[MAX_LEN];

    for (;;) {
        printf("Enter word: ");
        read_line(current, MAX_LEN);
        
        if (strcmp(current, smallest) < 0)
            strcpy(smallest, current);
        if (strcmp(current, largest) > 0)
            strcpy(largest, current);
        if (strlen(current) == 4)
            break;
    }

    printf("Smallest word: %s\n", smallest);
    printf("Largest word: %s\n", largest);

    return 0;
}

int read_line(char *str, int n) {
    int ch, i = 0;

    while ((ch = getchar()) != '\n') 
        if (i < n) 
            str[i++] = ch;

    str[i] = '\0';
    return i; 
}