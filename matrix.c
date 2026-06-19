#include <stdio.h>
int main(){

    int matrix[4][5]={{11,22,33,54,63},{43,54,65,86,69},{75,84,94,53,24},{90,56,56,67,87}};
     for(int i=0; i<4; i++)
     {

    for(int x= 0; x<5 ;x++)
    {
        printf("%d", matrix[i][x]);
    }
        printf("\n");


     }
     return 0;

    }