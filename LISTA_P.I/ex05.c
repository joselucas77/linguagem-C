#include <stdio.h>
#include <stdlib.h>

/*
Ler um valor e escrever se é positivo ou negativo (considere o valor zero como positivo).
*/

int main() {
    float num;
    printf("Please, enter a number: ");
    scanf("%f", &num);
    if (num >= 0) { printf("This number is POSITIVE!"); }
    else { printf("This number is NEGATIVE!"); }
}