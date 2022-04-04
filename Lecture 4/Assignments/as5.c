//Lecture 4 Assignment
//No. 5

#include <stdio.h>


int main(void)
{
    int start = 1, day = 1, no_of_days, start_day;
    int count = 0;

    printf("======= One-Month Calendar =======\n");
    printf("\nEnter the number of days: ");   //Ask the user for the number of days
    scanf("%d", &no_of_days);

    //To check if the entered number of days is correct
    if ((no_of_days < 28) || (no_of_days > 31)){
        printf("\nInvalid Input! Number of days should be from 28 to 31. Try again!\n");
    }else{
        printf("\nEnter the starting day of the week(1 = Sun, 7 = Sat): "); //Ask the user for the starting day
        scanf("%d", &start_day);

        //To check if the entered starting day is correct
        if ((start_day < 1) || (start_day > 7)){
            printf("\nInvalid Input! Starting day should be from 1 to 7. Try Again!\n");
        }else{

            printf("\nSu  M  T  W Th  F Sa\n");     //days of the week as guide

            //Determining the starting day
            for(; start != start_day; start++){
                printf("   ");
            }
            //Displaying the number of days starting from the "start" <- starting day
            while (day <= no_of_days){
                if (start <= 7){
                    printf("%2d ", day);    //if start exceeds 7, because there are only 7 days in a week
                    day++;                  //it will print in the new line and resetting the value of start to 1
                    start++;
                }else{
                    printf("\n");
                    start = 1;
                }
            }
            printf("\n");
        }
    }
    return 0;
}
