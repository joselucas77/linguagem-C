#include <stdio.h>
#include <stdlib.h>

/*
Eloi decidiu se dedicar à prática de ciclismo para manter a forma. Ele traçou como meta
percorrer pelo menos 8 km por dia todos os dias. Escreva um algoritmo que receba como
entrada a distância percorrida por Eloi em cada um dos sete dias da semana e, de acordo
com seu desempenho, exiba uma das seguintes mensagens:
I. Desempenho ótimo, caso a meta seja cumprida em cinco ou mais dias
II. Desempenho razoável, caso a meta só seja cumprida em três ou quatro dias
III. Desempenho ruim, caso a meta seja cumprida em menos de três dias
*/

int main() {
    int days[7];
    int i;
    int distance;

    for (i = 0; i < 7; i++) {
        printf("Enter the distance traveled per day %d: ", i + 1);
        scanf("%d", &distance);
        days[i] = distance;
    }

    int days_fulfilled = 0;
    for (i = 0; i < 7; i++) {
        if (days[i] >= 8) {
            days_fulfilled++;
        }
    }

    if (days_fulfilled >= 5) {
        printf("great performance\n");
    } else if (days_fulfilled >= 3) {
        printf("reasonable performance\n");
    } else {
        printf("bad performance\n");
    }


    return 0;
}