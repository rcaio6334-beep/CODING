#include <stdio.h>

int main() {
    int usuario_id, senha;
    printf("--- SISTEMA DE AUTENTICACAO ---\n");
    printf("Digite o ID de Usuario: ");
    scanf("%d", &usuario_id);
    printf("Digite a Senha numerica: ");
    scanf("%d", &senha);

    if (usuario_id == 1001 && senha == 1234) {
        printf("Acesso Concedido! Bem-vindo, Administrador.\n");
    } else if (usuario_id != 1001) {
        printf("Erro: Usuario nao encontrado.\n");
    } else {
        printf("Erro: Senha incorreta.\n");
    }

    return 0;
}
