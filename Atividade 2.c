#include <stdio.h>

int main() {
    int num1,num2;

    printf("Insira um número inteiro:\n");
    scanf("%d", &num1);
    printf("Insira outro número inteiro:\n");
    scanf("%d", &num2);

    if (num1 > num2) {
        printf("Número %d é maior que %d", num1, num2);
    }else if(num2 > num1) {
        printf("Número %d é maior que %d", num2, num1);
    }else if(num1 == num2) {
        printf("Os números %d é %d são iguais.", num1, num2);
    }
    return 0;
}