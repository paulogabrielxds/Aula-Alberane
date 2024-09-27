#include <stdio.h>

int main(void) {
    int a, b, c;
    int soma;

    printf("Digite um numero: ");
    scanf("%d", &a);

    printf("Digite outro numero: ");
    scanf("%d", &b);

    printf("Digite outro numero: ");
    scanf("%d", &c);

    soma = a + b + c;

    printf("Soma Total: %d", soma);

    return 0;
}