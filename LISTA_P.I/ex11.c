#include <stdio.h>
#include <stdlib.h>

/*
Faça um teste de mesa e complete o quadro a seguir para os seguintes valores:
x = 3; 150; 7; -2; 50
y = 2; 3; -1; 5; 3
mensagem = 'A'; 'B'; 'C'
*/

int main() {
    int x, y, z;
    char msg;

    printf("Insira dois valores: ");
    scanf("%d %d", &x, &y);

    z = (x*y) + 5;

    if (z <= 0) {msg = 'A';}
    else if (z <= 100) {msg = 'B';}
    else {msg = 'C';}

    printf("%d, %c", z, msg);

    return 0;
}

// RESPOSTAS
/*
11, B
455, C
-2, A
-5, A
155, C
*/