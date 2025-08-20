#include <stdio.h>
int main(){

    char tecla;
    printf("precione uma tecla e aperte ENTER : ");
    scanf("%c", &tecla); // tecla = 'a';
    getchar(); // ler o // n da leitura anterior

    printf(" voce pressionou a tecla %c\n", tecla);

    printf("pressione outra tecla e dpois aperte enter:  ");
    scanf("%c", &tecla); // tecla = 'a';
    getchar();
    printf(" voce pressionou a tecla %c\n", tecla);

    
    char nome[31];
    printf("entre com, seu nome: ");
    scanf("%[^\n]s" , nome);
    printf("vc digitou %s\n" , nome);

    return 0;


}