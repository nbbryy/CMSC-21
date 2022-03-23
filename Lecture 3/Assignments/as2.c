//Lecture 3 Assignment
//no. 2
//Two-Digit Number to Words

#include <stdio.h>

int main(void)
{
    int ones_digit, tens_digit, num_value;

    //Ask the user for a 2-digit number
    printf("Enter a two digit number:");
    scanf("%1d%1d", &tens_digit, &ones_digit);

    //Output
    printf("\nNumber entered in words:");

    //Evaluating the 2-digit number
    switch(tens_digit)
    {
    case 0: //if the first digit is 0
        switch(ones_digit)
        {
            case 0:printf(" Zero");break;
            case 1:printf(" One");break;
            case 2:printf(" Two");break;
            case 3:printf(" Three");break;
            case 4:printf(" Four");break;
            case 5:printf(" Five");break;
            case 6:printf(" Six");break;
            case 7:printf(" Seven");break;
            case 8:printf(" Eight");break;
            case 9:printf(" Nine");break;
        }
        break;
    case 1: //if the first digit is 1
        switch(ones_digit)
        {
            case 0:printf(" Ten");break;
            case 1:printf(" Eleven");break;
            case 2:printf(" Twelve");break;
            case 3:printf(" Thirteen");break;
            case 4:printf(" Fourteen");break;
            case 5:printf(" Fifteen");break;
            case 6:printf(" Sixteen");break;
            case 7:printf(" Seventeen");break;
            case 8:printf(" Eighteen");break;
            case 9:printf(" Nineteen");break;
        }
        break;
    //Check if the number has a first digit that is from 2 to 9
    case 2:printf(" Twenty");break;
    case 3:printf(" Thirty");break;
    case 4:printf(" Forty");break;
    case 5:printf(" Fifty");break;
    case 6:printf(" Sixty");break;
    case 7:printf(" Seventy");break;
    case 8:printf(" Eighty");break;
    case 9:printf(" Ninety");break;
    }

    //if the first digit is from 2 to 9
    if (tens_digit > 1)
    {
        switch(ones_digit)  //checking the ones digit of the number
        {
            case 1:printf("-one");break;
            case 2:printf("-two");break;
            case 3:printf("-three");break;
            case 4:printf("-four");break;
            case 5:printf("-five");break;
            case 6:printf("-six");break;
            case 7:printf("-seven");break;
            case 8:printf("-eight");break;
            case 9:printf("-nine");break;
        }
    }
    return 0;
}
