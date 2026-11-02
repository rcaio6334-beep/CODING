#include <stdio.h>

int main() {
    int idade;
    char tem_carteira;

    printf("Digite sua idade: ");
    scanf("%d", &idade);
    printf("Possui carteira de motorista? (s/n): ");
    scanf(" %c", &tem_carteira);

    if (idade >= 18 && (tem_carteira == 's' || tem_carteira == 'S')) {
        printf("Pode dirigir legalmente.\n");
    } else {
        printf("Nao esta autorizado a dirigir.\n");
    }

    return 0;
}
