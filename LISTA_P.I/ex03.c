#include <stdio.h>
#include <stdlib.h>

/*
O custo de um carro novo ao consumidor é a soma do custo de fábrica com a porcentagem
do distribuidor e dos impostos (aplicados ao custo de fábrica). Supondo que o percentual do
distribuidor seja de 28% e os impostos de 45%, escrever um algoritmo para ler o custo de
fábrica de um carro, calcular e escrever o custo final ao consumidor.
*/

int main() {
    float factory_cost, final_cost;
    printf("Enter the factory cost of the car: ");
    scanf("%f", &factory_cost);
    final_cost = factory_cost + (factory_cost * 0.28) + (factory_cost * 0.45);
    printf("The final cost to the consumer is $%.2f\n", final_cost);
    return 0;
};