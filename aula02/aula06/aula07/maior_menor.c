#include <stdio.h>

int main() {
    int numero;
    int maior = INT_MIN;
    int menor = INT_MAX;

    printf("Digite numeros inteiros (0 para parar):\n");

    while (1) {
        scanf("%d", &numero);

        if (numero == 0) {
            break;
        }

        if (numero > maior) {
            maior = numero;
        }

        if (numero < menor) {
            menor = numero;
        }
    }

    if (maior == INT_MIN && menor == INT_MAX) {
        printf("Nenhum numero foi digitado.\n");
    } else {
        printf("Maior numero: %d\n", maior);
        printf("Menor numero: %d\n", menor);
    }

    return 0;
}
