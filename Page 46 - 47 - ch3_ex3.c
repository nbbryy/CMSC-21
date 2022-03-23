//First Reading Assignment part 3
//Adding Two Fractions

#include <stdio.h>  //Directive

int main(void){ //main function

//statements

    int num1, denom1, num2, denom2, result_num, result_denom;   //declaring all variables in "int" type

    printf ("Enter first fraction:");   //Ask the user for the first input
    scanf ("%d/%d", &num1, &denom1) ;   //the scanf function checks whether the format of the input is valid, 2 integers separated with "/"

    printf ("Enter second fraction:");  //Ask the user for the second input
    scanf ("%d/%d",&num2, &denom2);

    result_num = num1 * denom2 + num2 * denom1; //Assigning computations to each variables
    result_denom = denom1 * denom2;

    printf("The sum is %d/%d\n", result_num, result_denom);   //The function takes 3 arguments

    //The values of variables "result_num" and "result_denom" will be displayed separated by "/"

    return 0;
}
