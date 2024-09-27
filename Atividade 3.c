#include <stdio.h>

int main(void) {
    float a, b, c;
    float media;

    printf("Digite o primeiro valor: ");
    scanf("%f", &a);

    printf("Digite o segundo valor: ");
    scanf("%f", &b);

    printf("Digite o terceiro valor: ");
    scanf("%f", &c);

    media = (a + b + c) / 3;

    printf("Media: %.2f\n", media);


}