//Lecture 4 Assignment
//No. 2

#include <stdio.h>

int main(void)
{
    int i = 11;

    printf("\nWhile:");
    while (i < 10){
        printf("%d ", i);
        i++;
    }

    printf("\nFor:");
    for(;i < 10; i++){
        printf("%d ", i);
    }

    printf("\nDo-While:");
    do{
        printf("%d ", i);
        i++;
    }while(i < 10);

    return 0;
}
