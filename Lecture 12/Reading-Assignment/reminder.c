/* Prints a one-month reminder list */

#include <stdio.h>
#include <string.h>

#define MAX_REMIND 50   /* maximum number of reminders */
#define MSG_LEN 60       /* max length of reminder message */

int read_line(char str[], int n);

int main(void)
{
    char reminders[MAX_REMIND][MSG_LEN + 3];
    char day_str[3], msg_str[MSG_LEN + 1];
    int day, i, j, num_remind = 0;

    for (;;) {
        if (num_remind == MAX_REMIND){
            printf("-- No space left --\n");    //The message will be displayed saying the number of reminders exceeds the maximum number of reminders
            break;
        }

        printf("Enter day and reminder: ");     //Ask the user for the day followed by a reminder
        scanf("%2d", &day);                     //The first 2 digit numbers will only be considered and stored in "day"

        if (day == 0)                           //if the user entered 0, the program will stop asking for more reminders
            break;

        sprintf(day_str, "%2d", day);           //the day entered in int will be converted to string
        read_line(msg_str, MSG_LEN);            //calls the function read_line

        for (i = 0; i < num_remind; i++)
            if (strcmp(day_str, reminders[i]) < 0)  //comparing the two dates
                break;

        for (j = num_remind; j > i; j--)
            strcpy(reminders[j], reminders[j-1]);   //copying the preceding reminder to the previous reminder

        strcpy(reminders[i], day_str);      //Each elements will contain the day followed by the message(reminder)
        strcat(reminders[i], msg_str);

        num_remind++;
    }

    printf("\nDay Reminder\n");
    for (i = 0; i < num_remind; i++)        //prints the reminder in chronological order, date and message every line
        printf(" %s\n", reminders[i]);

    return 0;
}

int read_line(char str[], int n)        //The function is responsible for getting the characters in the array (str[])
{                                       //and returns that series of characters (string) which is the reminder after the date
    int ch, i = 0;

    while ((ch = getchar()) != '\n')
        if (i < n)
            str[i++] = ch;
    str[i] = '\0';
    return i;
}
