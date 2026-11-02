#include <stdio.h>

int main() {
    int numero, contador = 0;
    float soma = 0.0f;

    printf("Digite numeros positivos para somar (ou um numero negativo para sair):\n");
    while (1) {
        printf("Numero: ");
        if (scanf("%d", &numero) != 1 || numero < 0) {
            break; // Sentinela
        }
        soma += numero;
        contador++;
    }

    if (contador > 0) {
        printf("Quantidade de numeros digitados: %d\n", contador);
        printf("Soma total: %.2f\n", soma);
        printf("Media: %.2f\n", soma / contador);
    } else {
        printf("Nenhum numero valido foi digitado.\n");
    }

    return 0;
}
