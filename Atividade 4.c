#include <stdio.h>

int main()
{
    int Matriz[2][2];
    printf("Digite os valores de matriz:\n");
    scanf("%d %d %d %d",&Matriz[0][0],&Matriz[0][1], &Matriz[1][0], &Matriz[1][1]);

    printf("Matriz\n%d %d\n%d %d", Matriz[0][0], Matriz[0][1], Matriz[1][0], Matriz[1][1]);
}