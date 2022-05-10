#include <stdio.h>
#include <stdbool.h>

#define ROW 8
#define COLUMN 8

void display_matrix();
char find_user_location(int user_input);
char find_charging_station(char point);

int main(void){

    int user_input;
    char location_point;

    display_matrix();   //displays the adjacency matrix

    printf("\nWhich point are you located? 0 - A, 1 - B, 2 - C, 3 - D, 4 - E, 5 - F, 6 - G, 7 - H");
    printf("\nYour location: ");
    scanf("%d", &user_input);       //ask for the location of the user

    location_point = find_user_location(user_input);  //the location of the user, which is in number, will be converted to letter
    printf("At point: %c\n", location_point);

    find_charging_station(location_point);  //determines the nearest charging station based on the converted location point (points A - H)

    return 0;
}
/*
The function "display matrix" shows the adjacency matrix on the screen. In here, the multidimensional array is initialized using
bracketed rows and in bool type. Using print function to display the heading or the first row of points A - H and the proceeding loops
displays the values in each rows and columns. First loop determines the number of rows and prints the first column of points A to H.
Nested loop is for columns for each row and the nested if-else statement checks [ROW][COLUMN] and prints whether it is true(1) or false(0).
*/


void display_matrix(void){

    bool road_networks[ROW][COLUMN] = {
        {1,1,0,0,0,1,0,0},
        {1,1,1,0,0,0,0,0},
        {0,1,1,0,1,1,0,0},
        {0,0,0,1,1,0,0,0},
        {0,0,0,1,1,0,0,0},
        {1,0,1,0,0,1,0,0},
        {1,0,0,1,0,0,1,0},
        {0,0,0,0,0,1,0,1},
    };

    printf("\tA\tB\t[C]\t[D]\tE\tF\tG\tH\n");

    for (int row = 0; row < ROW; row++){
        switch(row){
            case 0: printf("A");break;
            case 1: printf("B");break;
            case 2: printf("[C]");break;
            case 3: printf("[D]");break;
            case 4: printf("E");break;
            case 5: printf("F");break;
            case 6: printf("G");break;
            case 7: printf("H");break;
        }
        printf("\t");

        for (int column = 0; column < COLUMN; column++){
            if (road_networks[row][column]){
                printf("1");
            }else{
                printf("0");
            }
            printf("\t");
        }
        printf("\n");
    }
}

/*
The function "find_user_location" uses the input of the user from the main function as parameter and will be converted to its
equivalent in letters.
*/

char find_user_location(int user_input){

    char letter;

    switch(user_input){
        case 0: letter = 'A'; break;
        case 1: letter = 'B'; break;
        case 2: letter = 'C'; break;
        case 3: letter = 'D'; break;
        case 4: letter = 'E'; break;
        case 5: letter = 'F'; break;
        case 6: letter = 'G'; break;
        case 7: letter = 'H'; break;
    }
    printf("\n");

    return letter;
}

/*
The function "find_charging_station" determines the nearest charging station depending on the location point of the user, which is
converted value of the user input.
*/

char find_charging_station(char location_point){

    printf("point: ");

    switch(location_point){
        case 'C': case 'D':
            printf("%c is a charging station.", location_point); break;
        case 'A': case 'B': case 'F':
            printf("C arrived to charging station."); break;
        case 'E': case 'G':
            printf("D arrived to charging station."); break;
        case 'H':
            printf("No pathway towards the nearest charging station."); break;
    }
    printf("\n");

    return 0;
}
