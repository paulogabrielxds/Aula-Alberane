#include <stdio.h>
#include <stdlib.h>

int main()
{
    int Matriz[2][2];
    printf("Digite os valores de matriz:\n");
    scanf("%d %d",&Matriz[0][0],&Matriz[0][1]);
    Matriz[1][0] = Matriz[0][0];
    Matriz[1][1] = Matriz[0][1];
    printf("Matriz A:\n");
    for(int i=0;i<2;i++){

    }
    Matriz[0][0] = 0;
    Matriz[0][1] = 0;
    Matriz[1][0] = 0;
    Matriz[1][1] = 0;
    printf("Matriz:2X2\n");
}

