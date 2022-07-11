#include <stdio.h>
#include <stdlib.h>

/*
Faça um teste de mesa e complete o quadro a seguir para os seguintes valores das variáveis:
a = 1; 3; 2; 4; 5
b = 2; 4; 2; 4; 3
c = 3; 5; 4; 4; 3
mensagem = 'Triângulo Equilátero' ou 'Triângulo Isósceles' ou 'Triângulo Escaleno' ou 'Não e possível formar um triângulo'
*/

int main() {
    int a, b, c;

    printf("Informes tres numeros: ");
    scanf("%d %d %d", &a, &b, &c);

    if ((a < b+c) && (b < a+c) && (c < a+b)) {
        if ((a == b) && (b == c)) {
            printf("Triângulo Equilatero!");
        }
        else if ((a ==b) || (b == c) || (a == c)) {
            printf("Triângulo Isosceles!");
        }
        else {printf("Triângulo Escaleno!");}
    }
    else {printf("Nao e possivel formar um triangulo!");}

    return 0;
}

// RESPOSTAS
/*
Não é possível formar um triângulo
Triângulo Escaleno
Não é possível formar um triângulo
Triângulo Equilátero
Triângulo Isósceles
*/