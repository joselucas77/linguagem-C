#include <stdio.h>
#include <stdlib.h>

/*
Uma empresa quer verificar se um empregado está qualificado para a aposentadoria ou não.
Para estar em condições, um dos seguintes requisitos deve ser satisfeito:
- Ter no mínimo 65 anos de idade.
- Ter trabalhado no mínimo 30 anos.
- Ter no mínimo 60 anos e ter trabalhado no mínimo 25 anos.
Com base nas informações acima, faça um algoritmo que leia: o número do empregado
(código), o ano de seu nascimento e o ano de seu ingresso na empresa. O programa deverá
escrever a idade e o tempo de trabalho do empregado e a mensagem 'Requerer
aposentadoria' ou 'Não requerer'.
*/

int main() {
    int year_birth, year_company, age, time_company;
    float code;

    printf("What's your code? ");
    scanf("%f", &code);
    printf("What's the year of your birth? ");
    scanf("%d", &year_birth);
    printf("What year did you join the company? ");
    scanf("%d", &year_company);

    age = 2022 - year_birth;
    time_company = 2022 - year_company;

    if (age >= 65) {
        printf("The employee with the code %.0f is %d years old and has been with the company for %d years. You are entitled to retirement!", code, age, time_company);
    }
    else if (time_company >= 30) {
        printf("The employee with the code %.0f is %d years old and has been with the company for %d years. You are entitled to retirement!", code, age, time_company);
    }
    else if (60 <= age < 65 && time_company >= 25) {
        printf("The employee with the code %.0f is %d years old and has been with the company for %d years. You are entitled to retirement!", code, age, time_company);
    }
    else {
        printf("The employee with the code %.0f is %d years old and has been with the company for %d years.\nNot entitled to retirement!",code, age, time_company);
    }

    return 0;
}