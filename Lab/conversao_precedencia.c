#include <stdio.h>

int main() {
    int num1 = 7, num2 = 2;
    float media_errada = (num1 + num2) / 2; // Divisao inteira
    float media_correta = (float)(num1 + num2) / 2.0f; // Cast explicito

    printf("Media errada (sem cast): %.2f\n", media_errada);
    printf("Media correta (com cast): %.2f\n", media_correta);

    int x = 5;
    printf("Valor inicial de x: %d\n", x);
    x += 3;
    printf("Apos x += 3: %d\n", x);
    printf("Pós-incremento x++: %d\n", x++);
    printf("Valor final de x: %d\n", x);

    return 0;
}
