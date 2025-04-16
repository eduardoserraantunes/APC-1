#include <stdio.h>

int main(){
    int idade = 0;
    printf("Informe sua idade: ");
    scanf("%i", &idade);

    if(idade < 16) {
        printf("Voce nao pode votar!\n");
    } else {
        if(idade >= 18) {
            printf("Voce eh obrigado a votar!\n");
        } else {
            printf("Voce pode votar!\n");

        }

    }







    return 0;
}