#include <stdio.h>
#include <stdlib.h>

/*
Escreva um algoritmo para ler 2 valores e se o segundo valor informado for ZERO, deve
ser lido um novo valor, ou seja, para o segundo valor não pode ser aceito o valor zero e
imprimir o resultado da divisão do primeiro valor lido pelo segundo valor lido. (utilizar a
estrutura REPITA).
*/

int main() {
    int num1, num2, i;

    printf("Enter a number: ");
    scanf("%d", &num1);
    printf("Enter a number: ");
    scanf("%d", &num2);

    while (num2 == 0) {
        printf("Enter a number: ");
        scanf("%d", &num2);
    }

    printf("%d\n", num1 / num2);

    return 0;
}