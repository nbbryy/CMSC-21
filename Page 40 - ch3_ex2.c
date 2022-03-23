//First Reading Assignment part 2

#include <stdio.h>  //Directive
int main(void){     //Main Function

//statements

    int i;          //Declare variable i with "int" type, variable x with "float" type
    float x;

    i = 40;          // Assigning values to variables
    x = 839.21f;

    printf("|%d|%5d|%-5d|%5.3d|\n", i, i, i, i);    //the printf function takes 5 arguments

    //Each value is displayed separated by "|".
    //%d contains the original value if i, which is 40 (2 digits)
    //5 in %5d represents 5 spaces, this will add 3 spaces on the left of i
    //-5 in %-5d, on the otherhand will add 3 spaces on the right of i
    //5.3 in %5.3d will display i in maximum of 5 digits and minimum of 3. This will add 2 spaces and 0 to the left of i respectively (i is right justified)

    printf("|%10.3f|%10.3e|%-10g|\n", x, x, x);     //the printf function takes 4 arguments

    //%10.3f displays x in 10 characters all in all with 3 decimal places. Adding 0 to the right of x for 3 decimal places and 3 spaces on the left
    //%10.3e displays x in exponential form. 10 characters with 3 decimal places.
    //%-10g displays x in either exponential or decimal form. (-) indicates that 4 spaces will be added on the left of x


    return 0;
}
