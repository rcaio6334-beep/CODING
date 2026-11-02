#include <stdio.h>

int main() {
    float nota;
    printf("Digite a nota do aluno (0.0 a 10.0): ");
    if (scanf("%f", &nota) == 1) {
        if (nota >= 7.0) {
            printf("Conceito: Aprovado! Parabens.\n");
        } else if (nota >= 5.0) {
            printf("Conceito: Em Recuperacao.\n");
        } else {
            printf("Conceito: Reprovado.\n");
        }
    }
    return 0;
}
