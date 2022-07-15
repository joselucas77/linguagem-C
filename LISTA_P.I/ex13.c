#include <stdio.h>
#include <stdlib.h>

/*
Luiza vai viajar com seus amigos e está pesquisando preços. O grupo está em dúvida entre
alugar uma casa em Pipa ou em Fortaleza. Caso escolham ir para Pipa, o aluguel de uma
casa com 2 quartos sai por R$ 600 e o de uma com 3 quartos custa R$ 900. Lá eles
pretendem fazer um passeio de barco, que custa R$ 75 por pessoa. Caso a escolha do grupo
seja Fortaleza, eles poderão pagar R$ 950 por uma casa com 3 quartos ou R$ 1120 por uma
com 4 quartos. A atração que querem visitar é um parque aquático cujo ingresso individual
custa R$ 60. Escreva um algoritmo que receba como entrada a quantidade de pessoas do
grupo, a cidade escolhida, e a quantidade de quartos que querem na casa, e calcule e exiba o
valor total da viagem, e quanto cada um irá pagar. Obs: Considere que todos do grupo irão
para o passeio da cidade.
*/

int main() {
    int people, rooms;
    char city[] = "";
    float total_trip, total_person, accommodation;

    printf("How many people will go for the trip? ");
    scanf("%d", &people);
    printf("Which city will you visit, Pipa or Fortaleza? ");
    scanf("%s", &city);
    printf("How many rooms will you want? ");
    scanf("%d", &rooms);

    if (city == "Pipa") {
        if (rooms == 2) {
            total_trip = 600 + (75 * people);
            total_person = total_trip / people;
        }
        else {
            total_trip = 900 +(75 * people);
            total_person = total_trip / people;
        }
    }
    else if (city == "Fortaleza") {
        if (rooms == 3) {
                total_trip = 950 + (60 * people);
                total_person = total_trip / people;
        }
        else {
            total_trip = 1120 + (60 * people);
            total_person = total_trip / people;
        }
    }

    printf("Total trip was $%.2f\n", total_trip);
    printf("Each will pay $%.2f", total_person);

    return 0;
}