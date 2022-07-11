#include <stdio.h>
#include <stdlib.h>

/*
Faça um algoritmo que leia três notas de um aluno, calcule e escreva a média final deste
aluno. Considerar que a média é ponderada e que o peso das notas é 2, 3 e 5. Fórmula para
o cálculo da média final é:
média final = (n1 * 2 + n2 * 3 + n3 * 5)/10
*/

int main() {
    float n1, n2, n3, average;
    printf("Type the first note: ");
    scanf("%f", &n1);
    printf("Type the second note: ");
    scanf("%f", &n2);
    printf("Type the third note: ");
    scanf("%f", &n3);
    average = (n1 * 2 + n2 * 3 + n3 * 5)/10;
    printf("The final average is: %.2f\n", average);
    return 0;
};