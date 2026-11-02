#include <stdio.h>

int main() {
    int numero;
    printf("Digite um numero inteiro: ");
    if (scanf("%d", &numero) == 1) {
        // Exercicio 1: Par ou Impar
        if (numero % 2 == 0) {
            printf("O numero %d e PAR.\n", numero);
        } else {
            printf("O numero %d e IMPAR.\n", numero);
        }

        // Positivo, Negativo ou Zero
        if (numero > 0) {
            printf("O numero e POSITIVO.\n");
        } else if (numero < 0) {
            printf("O numero e NEGATIVO.\n");
        } else {
            printf("O numero e ZERO.\n");
        }
    }
    return 0;
}
