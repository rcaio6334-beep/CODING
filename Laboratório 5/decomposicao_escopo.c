#include <stdio.h>

int g_contador_global = 0; // Variavel global

float calcularMedia(float n1, float n2) {
    float media_local = (n1 + n2) / 2.0f; // Escopo local
    g_contador_global++;
    return media_local;
}

int main() {
    float nota1 = 8.5f, nota2 = 9.0f;
    float resultado = calcularMedia(nota1, nota2);

    printf("Nota 1: %.1f | Nota 2: %.1f\n", nota1, nota2);
    printf("Media calculada: %.2f\n", resultado);
    printf("Chamadas da funcao: %d\n", g_contador_global);

    return 0;
}
