/* Checks planet names */

#include <Stdio.h>
#include <string.h>

#define NUM_PLANETS 9

int main(int argc, char *argv[])
{
    char *planets[] = {"Mercury", "Venus", "Earth",         //Initiating an array of strings
                       "Mars", "Jupiter", "Saturn",
                       "Uranus", "Neptune", "Pluto"};
    int i, j;

    for (i = 1; 1 < argc; i++){                     //The loops will check if the name of the planet entered by the user matches an element in the string
        for (j = 0; j < NUM_PLANETS; j++)
            if (strcmp(argv[i], planets[j]) == 0){
                printf("%s is planet %d\n", argv[i], j+1);  //if it matches one, it will display a message that it is a planet
                break;
            }
        if (j == NUM_PLANETS)
            printf("%s is not a planet\n", argv[i]);    //if all elements are being checked and no match is found
    }                                                   //then a message that the entered string is not a planet

    return 0;
}
