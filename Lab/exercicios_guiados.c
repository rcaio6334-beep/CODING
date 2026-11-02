#include <stdio.h>

int main() {
    // Exercicio 1: Idade Futura
    int idade_atual, anos_futuros;
    printf("Digite sua idade atual: ");
    if (scanf("%d", &idade_atual) == 1) {
        printf("Quantos anos no futuro quer calcular? ");
        scanf("%d", &anos_futuros);
        printf("Sua idade daqui a %d anos sera: %d anos.\n\n", anos_futuros, idade_atual + anos_futuros);
    }

    // Exercicio 2: Calculo de Area e Perimetro
    float largura, altura;
    printf("Digite a largura do retangulo: ");
    scanf("%f", &largura);
    printf("Digite a altura do retangulo: ");
    scanf("%f", &altura);
    printf("Area: %.2f | Perimetro: %.2f\n", largura * altura, 2 * (largura + altura));

    return 0;
}
