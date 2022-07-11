#include <stdio.h>
#include <stdlib.h>

/*
A jornada de trabalho semanal de um funcionário é de 40 horas. O funcionário que
trabalhar mais de 40 horas receberá hora extra, cujo cálculo é o valor da hora regular com
um acréscimo de 50%. Escreva um algoritmo que leia o número de horas trabalhadas em
um mês, o salário por hora e escreva o salário total do funcionário, que deverá ser acrescido
das horas extras, caso tenham sido trabalhadas (considere que o mês possua 4 semanas
exatas).
*/

int main() {
    int hours;
    float wage, total_salary, extra_hours;
    printf("How many hours did you work this month: ");
    scanf("%d", &hours);
    printf("What's the hourly wage: ");
    scanf("%f", &wage);
    if (hours > 160) {
        extra_hours = (hours - 160) * (wage * 1.5);
        total_salary = (160 * wage) + extra_hours;
    } else {
        total_salary = hours * wage;
    }
    printf("Your salary this month was $%.2f", total_salary);
}