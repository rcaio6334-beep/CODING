#include <stdio.h>

float somar(float a, float b) { return a + b; }
float subtrair(float a, float b) { return a - b; }
float multiplicar(float a, float b) { return a * b; }
float dividir(float a, float b) {
    if (b != 0) return a / b;
    printf("Erro: Divisao por zero!\n");
    return 0;
}

void exibirMenu() {
    printf("\n=== CALCULADORA MODULAR ===\n");
    printf("1. Somar\n");
    printf("2. Subtrair\n");
    printf("3. Multiplicar\n");
    printf("4. Dividir\n");
    printf("0. Sair\n");
    printf("Escolha uma opcao: ");
}

int main() {
    int opcao;
    float n1, n2, res;

    do {
        exibirMenu();
        scanf("%d", &opcao);

        if (opcao >= 1 && opcao <= 4) {
            printf("Digite dois numeros: ");
            scanf("%f %f", &n1, &n2);
        }

        switch(opcao) {
            case 1: res = somar(n1, n2); printf("Resultado: %.2f\n", res); break;
            case 2: res = subtrair(n1, n2); printf("Resultado: %.2f\n", res); break;
            case 3: res = multiplicar(n1, n2); printf("Resultado: %.2f\n", res); break;
            case 4: res = dividir(n1, n2); printf("Resultado: %.2f\n", res); break;
            case 0: printf("Encerrando calculadora...\n"); break;
            default: printf("Opcao invalida!\n");
        }
    } while(opcao != 0);

    return 0;
}
