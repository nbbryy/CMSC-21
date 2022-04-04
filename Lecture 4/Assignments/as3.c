//Lecture 4 Assignment
//No. 3

#include <stdio.h>

int main(void)
{
    int i = 1;

    printf("\nWhile:");     //WHILE
    while (i <= 128){
        printf("%d ", i);
        i *= 2;
    }

    printf("\nFor:");       //FOR
    for(;i <= 128; i *= 2){
        printf("%d ", i);
    }

    printf("\nDo-While:");  //DO-WHILE
    do{
        printf("%d ", i);
        i *= 2;
    }while(i <= 128);

    return 0;
}
