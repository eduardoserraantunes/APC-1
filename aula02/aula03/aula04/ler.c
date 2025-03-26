#include <stdio.h>
int main(){

    char tecla;
    printf("precione uma tecla e aperte ENTER : ");
    scanf("%c", &tecla); // tecla = 'a';
    getchar(); // ler o // n da leitura anterior

    printf(" voce precionou a tecla %c\n", tecla);

    printf("precionou outra tecla e dpois aperte enter:  ");
    scanf("%c", &tecla); // tecla = 'a';

    printf(" voce precionou a tecla %c\n", tecla);

    return 0;
}