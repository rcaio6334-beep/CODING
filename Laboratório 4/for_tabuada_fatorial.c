#include <stdio.h>

int main() {
    int num;
    printf("Digite um numero inteiro positivo: ");
    if (scanf("%d", &num) == 1 && num >= 0) {
        printf("\nTabuada do %d:\n", num);
        for (int i = 1; i <= 10; i++) {
            printf("%d x %2d = %d\n", num, i, num * i);
        }

        long long fatorial = 1;
        for (int i = 1; i <= num; i++) {
            fatorial *= i;
        }
        printf("\nFatorial de %d! = %lld\n", num, fatorial);
    }
    return 0;
}
