#include <stdio.h>

int main(void) {
    int opcao;

    do {
        printf("\n===============================\n");
        printf("         MENU PRINCIPAL        \n");
        printf("===============================\n");
        printf("1 - Cadastrar Usuario\n");
        printf("2 - Listar Registros\n");
        printf("3 - Configurações\n");
        printf("0 - Sair\n");
        printf("===============================\n");
        printf("Escolha uma opcao: ");
        scanf("%d", &opcao);

        switch(opcao) {
            case 1:
                printf("\n[OK] Opcao 1 selecionada: Cadastro efetuado.\n");
                break;
            case 2:
                printf("\n[OK] Opcao 2 selecionada: Listando dados...\n");
                break;
            case 3:
                printf("\n[OK] Opcao 3 selecionada: Abrindo configuracoes.\n");
                break;
            case 0:
                printf("\nSaindo do programa... Ate logo!\n");
                break;
            default:
                printf("\n[ERRO] Opcao invalida! Tente novamente.\n");
        }
    } while(opcao != 0);

    return 0;
}
