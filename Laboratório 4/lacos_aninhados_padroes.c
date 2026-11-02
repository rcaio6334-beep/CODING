#include <stdio.h>

int main() {
    int linhas = 5;

    printf("Padrao de Triangulo de Asteriscos:\n");
    for (int i = 1; i <= linhas; i++) {
        for (int j = 1; j <= i; j++) {
            printf("* ");
        }
        printf("\n");
    }

    return 0;
}
