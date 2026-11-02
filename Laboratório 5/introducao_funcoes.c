#include <stdio.h>

void exibirMensagemBoasVindas() {
    printf("========================================\n");
    printf("   BEM-VINDO AO SISTEMA MODULAR EM C    \n");
    printf("========================================\n");
}

void exibirRodape() {
    printf("----------------------------------------\n");
    printf("        Fim da execucao.\n");
}

int main() {
    exibirMensagemBoasVindas();
    printf("Executando a logica principal do programa...\n");
    exibirRodape();
    return 0;
}
