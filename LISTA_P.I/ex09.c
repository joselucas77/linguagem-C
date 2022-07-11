#include <stdio.h>
#include <stdlib.h>

/*
Escreva um algoritmo para ler 10 números e ao final da leitura escrever a soma total dos 10
números lidos.
*/

int main() {
    float num, sum;

    for (int i = 1; i <= 10; i++) {
        printf("Enter a number: ");
        scanf("%f", &num);
        sum += num;
    }

    printf("The total sum is %.0f", sum);

    return 0;
}
