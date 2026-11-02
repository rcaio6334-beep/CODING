#include <stdio.h>
#include <stdbool.h>

bool ehPar(int num) {
    return num % 2 == 0;
}

bool ehPositivo(int num) {
    return num > 0;
}

void analisarNumero(int num) {
    printf("Analise do numero %d:\n", num);
    printf(" - E par? %s\n", ehPar(num) ? "Sim" : "Nao");
    printf(" - E positivo? %s\n", ehPositivo(num) ? "Sim" : "Nao");
}

int main() {
    analisarNumero(4);
    printf("\n");
    analisarNumero(-7);
    return 0;
}
