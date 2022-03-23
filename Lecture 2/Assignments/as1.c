//Lecture 2 Assignment
//No.1
//Reverses a 2-Digit Number
#include <stdio.h>

int main()
{
    int first_digit, second_digit;  //declare variables as integers

    //"%1d" corresponds to one digit
    printf("Please enter a 2-digit number: ");      //prompt the user for an input
    scanf("%1d%1d", &first_digit, &second_digit);   //assign each value (digit) to their corresponding variables, respectively

    printf("Reverse: %1d%1d\n", second_digit, first_digit);        //reversing the positions of the two digits

    return 0;
}
