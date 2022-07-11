#include <stdio.h>
#include <stdlib.h>

/*
Faça um algoritmo para ler: a descrição do produto (nome), a quantidade adquirida e o
preço unitário. Calcular e escrever o total (total = quantidade adquirida * preço unitário), o
desconto e o total a pagar (total a pagar = total - desconto), sabendo-se que:
- Se quantidade <= 5 o desconto será de 2%
- Se quantidade > 5 e quantidade <=10 o desconto será de 3%
- Se quantidade > 10 o desconto será de 5%
*/

int main() {
    char name[] = "";
    int amount;
    float value, total, total_payable;

    printf("What is the product? ");
    scanf("%s", &name);
    printf("How many products do you want? ");
    scanf("%d", &amount);
    printf("What is the product's value? ");
    scanf("%f", &value);

    total = amount * value;
    printf("The total amount is $%.2f\n", total);

    if (amount <= 5) {
        total_payable = total - 2;
        printf("The total discounted amount is $%.2f", total_payable);
    }
    else if (amount > 5 && amount <= 10) {
        total_payable = total - 3;
        printf("The total discounted amount is $%.2f", total_payable);
    }
    else if (amount > 10) {
        total_payable = total - 5;
        printf("The total discounted amount is $%.2f", total_payable);
    }

    return 0;
}