#include <stdio.h>
#include <math.h>

int main()
{
    //Let result be the output of the first iterative method

    float user_input, dif, result, result_2, square_root;
    float initial_guess = 1;
    float tol = 0.00001;
    int n = 0; //loop control variable

    printf("Enter the value of x: ");   //Let x = 3
    scanf("%lf", &user_input);

    //solving the iterative method using the initial guess
    result = ((user_input / initial_guess) + initial_guess) / 2 ;

    while (n == 0){

        //Using result as our new value for y
        result_2 = (user_input / result + result) / 2 ;

        //difference of (yn+1 - y)
        dif = result - result_2;

        if (dif <= tol){
            printf("%.5f\n", square_root);
            n++;
        }else{
            result = result_2; //the new result will be changed if dif is not <= tol
        }
    }

    return 0;
}
