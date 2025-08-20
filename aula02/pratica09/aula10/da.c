#include <stdio.h>

#define DOMINGO 1
#define SEGUNDA 2
#define TERCA 3
#define QUARTA 4
#define QUINTA 5
#define SEXTA 6
#define SABADO 7

int main() {
    enum dia_da_semana_e {
        dom = 1,
        seg,
        ter,
        qua,
        qui,
        sex,
        sab
    };

    int dia = 0;

    printf("Entre com o dia da semana (1 a 7): ");
    scanf("%i", &dia);

    switch (dia) {
        case seg:
        case ter:
        case qua:
        case qui:
        case sex:
            printf("Eh dia util\n");
            break;
        case dom:
        case sab:
            printf("Eh dia nao util\n");
            break;
        default:
            printf("Dia invalido\n");
    }

    return 0;
}





