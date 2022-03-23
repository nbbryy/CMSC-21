//Lecture 3 Assignment
//no.1
//Teenager or Not

#include <stdio.h>

int main(void)
{
    //In C, any value except 0 is true
    //But for this code, lets just define "true" as 1 & "false" as 0
    int age, true = 1, false = 0, teenager;

    printf("\nEnter age:");
    scanf("%i", &age);

    //if age is from 13 up to 19, teenager is true
    if ((age >= 13) && (age <= 19))
    {
        teenager = true;
    }
    else
    {
        teenager = false;
    }
    printf("%i\n", teenager);

    return 0;
}
