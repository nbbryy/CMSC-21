#include <stdio.h>
#include <stdbool.h>

#define ROW 8
#define COLUMN 8

int main(){

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

    int user_location;
    char point;

    printf("\nWhich point are you located? 0 - A, 1 - B, 2 - C, 3 - D, 4 - E, 5 - F, 6 - G, 7 - H");
    printf("\nYour location: ");
    scanf("%d", &user_location);

    printf("At point: ");

    switch(user_location){
        case 0: printf("A"); point = 'A'; break;
        case 1: printf("B"); point = 'B'; break;
        case 2: printf("C"); point = 'C'; break;
        case 3: printf("D"); point = 'D'; break;
        case 4: printf("E"); point = 'E'; break;
        case 5: printf("F"); point = 'F'; break;
        case 6: printf("G"); point = 'G'; break;
        case 7: printf("H"); point = 'H'; break;
        default: printf("Invalid input of location.");break;
    }

    printf("\npoint: ");

    switch(point){
        case 'C': case 'D':
            printf("%c is a charging station.", point); break;
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
