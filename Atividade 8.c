#include <stdio.h>
#include <string.h>

int main() {
    char palavra[50];
    printf("Digite uma palavra:");
    fgets(palavra, 50, stdin);

    printf("A palavra foi %s\n", palavra);
    int tamanho = strlen(palavra);

    printf("A quantidade de letras é %d\n", tamanho-1);
    return 0;
}