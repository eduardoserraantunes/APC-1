#include <stdio.h>

void converterParaBinario(int numero) {
    int binario[32]; 
    int i = 0;

    if (numero == 0) {
        printf("0");
        return;
    }

    while (numero > 0) {
        binario[i] = numero % 2;
        numero = numero / 2;
        i++;
    }

    
    for (int j = i - 1; j >= 0; j--) {
        printf("%d", binario[j]);
    }
}

int main() {
    int numero;

    printf("Digite um numero decimal: ");
    scanf("%d", &numero);

    printf("Representacao binaria: ");
    converterParaBinario(numero);
    printf("\n");

    return 0;
}
