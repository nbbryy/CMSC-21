//Lecture 4 Assignment
//No. 4

#include <stdio.h>

int main(void)
{
    int n = 0, m = 1, user_input;

    printf("Enter the power of 2:");
    scanf("%d", &user_input);

    while(user_input != n){
        m *= 2;                 //Let m be "2 to the  n"
        n++;
    }

    printf("\n2 to the %d: %d\n", user_input, m);

    return 0;
}
