//First Reading Assignment Part 1

#include <stdio.h>    //Declaring the Preprocessor Directive

int main(void)  // main function

//statements
{
    int i, j;       //Declaring variables i, j with "int" type
    float x, y;     //Declaring variables x, y with "float" type

    i = 10;
    j = 20;         //Assigning values to each corresponding variables
    x = 43.2892f;
    y = 5527.0f;

    printf("i = %d, j = %d, x = %f, y = %f\n", i, j, x, y); //the printf function takes 5 arguments.

    //the values with "int" types (i and j) are represented by (%d) while those "float" types(x and y) with (%f)
    //\n indicates that it will proceed to a "new line"
}
