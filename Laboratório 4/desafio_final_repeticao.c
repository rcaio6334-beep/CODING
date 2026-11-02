#include <stdio.h>

int main() {
    int n, maior, menor;
    printf("Quantos valores deseja informar? ");
    if (scanf("%d", &n) == 1 && n > 0) {
        int valor;
        printf("Digite o 1o valor: ");
        scanf("%d", &valor);
        maior = menor = valor;

        for (int i = 2; i <= n; i++) {
            printf("Digite o %do valor: ", i);
            scanf("%d", &valor);
            if (valor > maior) maior = valor;
            if (valor < menor) menor = valor;
        }

        printf("\nMaior valor informado: %d\n", maior);
        printf("Menor valor informado: %d\n", menor);
    }
    return 0;
}
