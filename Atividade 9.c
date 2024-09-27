//Faça um programa que leia um número inteiro e mostre a tabuada desse número.

#include <stdio.h>

int main(void){
    int a, b;
    int multiplication;

    printf("Digite um numero: ");
    scanf("%d", &a);

    for(b = 1; b <= 10; b++) {
        multiplication = a * b;
        printf("%d * %2d = %3d\n", a, b, multiplication);
    }

    return 0;
}
