#include <stdio.h>

// Prototipos das funcoes
int somar(int a, int b);
int subtrair(int a, int b);

int main() {
    int x = 20, y = 8;
    printf("Soma (%d + %d) = %d\n", x, y, somar(x, y));
    printf("Subtracao (%d - %d) = %d\n", x, y, subtrair(x, y));
    return 0;
}

// Implementacao das funcoes
int somar(int a, int b) {
    return a + b;
}

int subtrair(int a, int b) {
    return a - b;
}
