#include <stdio.h>

struct Pessoa {
    char nome[50];
    int idade;
    float altura;
};

int main() {
    struct Pessoa pessoa1;
    printf("Digite seu nome:\n");
    fgets(pessoa1.nome, 50, stdin);
    printf("Digite sua idade:\n");
    scanf("%d", &pessoa1.idade);
    printf("Digite sua altura\n");
    scanf("%f", &pessoa1.altura);

    printf("Veja a seguir os dados inseridos.\n");
    printf("%s", pessoa1.nome);
    printf("%d\n", pessoa1.idade);
    printf("%.2f\n", pessoa1.altura);
    return 0;
}