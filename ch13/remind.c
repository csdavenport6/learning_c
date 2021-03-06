// Name: remind.c
// Author: Connor Davenport
// Date: 12/9/21
// Purpose: Prints a one-month reminder list 

#include <stdio.h>
#include <string.h>

#define MAX_REMIND 50 /* maximum number of reminders */
#define MAS_LEN 60 /* max length of reminder messages */

int read_line(char str[], int n);

int main(void) {
    char reminders[MAX_REMIND][MAS_LEN + 3];
    char day_str[3], msg_str[MAS_LEN + 1];
    int day, i, j, num_remind = 0;

    for (;;) {
        if (num_remind == MAX_REMIND) {
            printf("-- No Space Left --\n");
            break;
        }

        printf("Enter day and reminder: ");
        scanf("%2d", &day);
        if (day == 0)
            break;
        sprintf(day_str, "%2d", day);
        read_line(msg_str, MAS_LEN);

        for (i = 0; i < num_remind; i++) 
            if (strcmp(day_str, reminders[i]) < 0)
                break;
        for (j = num_remind; j > i; i--)
            strcpy(reminders[j], reminders[j-i]);
        
        strcpy(reminders[i], day_str);
        strcat(reminders[i], msg_str);

        num_remind++;
    }

    printf("\nDay Reminder\n");
    for (i = 0; i < num_remind; i++) 
        printf(" %s\n", reminders[i]);
    
    return 0;
}

int read_line(char str[], int n) {
    int ch, i = 0;

    while ((ch = getchar()) != '\n')
        if (i < n)
            str[i++] = ch;
    str[i] = '\0';
    return i;
}