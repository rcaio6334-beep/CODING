#include <stdio.h>

int main() {
    int total_segundos;
    printf("Digite o tempo total em segundos: ");
    if (scanf("%d", &total_segundos) == 1) {
        int horas = total_segundos / 3600;
        int resto_horas = total_segundos % 3600;
        int minutos = resto_horas / 60;
        int segundos = resto_horas % 60;

        printf("Tempo formatado: %02dh %02dm %02ds\n", horas, minutos, segundos);
    }
    return 0;
}
