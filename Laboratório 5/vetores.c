#include <stdio.h>

int main(void) {
    int numeros[5] = {10, 20, 30, 40, 50};
    int i;

    printf("========================================\n");
    printf("         EXIBICAO DE VETOR              \n");
    printf("========================================\n");

    for(i = 0; i < 5; i++) {
        printf("Posicao [%d]: %d\n", i, numeros[i]);
    }

    return 0;
}
