#include <stdio.h>

int main() {
    enum meses_do_ano_e {
        jan, fev, mar, abr, mai, jun,
        jul, ago, set, out, nov, dez
    };

    char nome_dos_meses[12][10] = {
        "Janeiro", "Fevereiro", "Marco", "Abril", "Maio", "Junho",
        "Julho", "Agosto", "Setembro", "Outubro", "Novembro", "Dezembro"
    };

    int mes = 0;

    printf("Entre com um mes (1 a 12): ");
    scanf("%i", &mes);

    if (mes >= 1 && mes <= 12) {
        printf("O mes escolhido foi %s\n", nome_dos_meses[mes - 1]);
    } else {
        printf("Mes invalido\n");
    }

    return 0;
}
















