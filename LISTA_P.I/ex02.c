#include <stdio.h>
#include <stdlib.h>

/*
Escreva um algoritmo para ler as dimensões de um retângulo (base e altura), calcular e
escrever a área do retângulo.
*/

int main() {
    int base, height, area;
    printf("Digite dois numeros: ");
    scanf("%d %d", &base ,&height);
    area = (base * height) / 2;
    printf("%d", area);
    return 0;
};