#include <stdio.h>

int main() {
    int num1[5] = {1, 2, 3, 4, 5};
    int num2[3] = {6, 7, 8};

    int new[8];
    for (int i=0; i<5; i++)
    {
        new[i] = num1[1];

    }
    for(int i=0; i<3; i++)
    {
        new[i+5] =num2[i];
    }
    for(int i=0; i<8; i++)
    {
        printf("\n new array : %d", new[i]);
    }

    return 0;
}