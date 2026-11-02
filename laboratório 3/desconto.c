#include <stdio.h>

int main(void) {
    float preco_original = 150.00;
    float percentual_desconto = 15.0; // 15%
    float valor_desconto, preco_final;

    valor_desconto = preco_original * (percentual_desconto / 100.0);
    preco_final = preco_original - valor_desconto;

    printf("========================================\n");
    printf("         CALCULO DE DESCONTO            \n");
    printf("========================================\n");
    printf("Preco Original:   R$ %8.2f\n", preco_original);
    printf("Desconto (%.0f%%):    R$ %8.2f\n", percentual_desconto, valor_desconto);
    printf("----------------------------------------\n");
    printf("Preco com Desconto: R$ %8.2f\n", preco_final);
    printf("========================================\n");

    return 0;
}
