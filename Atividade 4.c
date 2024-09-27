#include <stdio.h>

int main(void)
{
    int num;

    printf("entrar com o numero\n:  ");
    scanf("%d", &num);

    if (num % 2 == 0) {
        printf("%d é um número par.\n", num);
    } else {
        printf("%d é um número ímpar.\n", num);
    }


    return 0;

