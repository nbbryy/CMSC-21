//Lecture 2 Assignment
//No.2
//Reverses a 3-digit number
#include <stdio.h>

int main()
{
    int first_digit, second_digit, last_digit;  //declare variables as integers

    //"%1d" corresponds to one digit
    printf("Please enter a 3-digit number: ");                      //prompt the user for an input
    scanf("%1d%1d%1d", &first_digit, &second_digit, &last_digit);   //assigning each value (digit) to each variable, respectively

    printf("Reverse: %1d%1d%1d\n",last_digit, second_digit, first_digit);        //reversing the positions of first and last digits, retaining the second digit

    return 0;
}
