#include <stdio.h>

void NumeroMaior() {
    int num1, num2;
    printf("Insira um número: \n");
    scanf("%d", &num1);
    printf("Insira outro número: \n");
    scanf("%d", &num2);

    if(num1 > num2) {
        printf("%d e o maior.", num1);
    }else if(num2 > num1) {
        printf("%d e o maior.", num2);
    }else if(num1 == num2) {
        printf("Os números %d, %d são iguais, não contendo algum maior!!!", num1, num2);
    }
}

int main() {
    NumeroMaior();
    return 0;
}