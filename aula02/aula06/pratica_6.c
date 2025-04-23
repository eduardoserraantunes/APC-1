#include <stdio.h>
int main(){
    
   int idade;
    printf("Digite sua idade: ");
    scanf("%d", &idade);

    if (idade < 16) {
        printf("Você NÃO PODE votar.\n");
    } else if ((idade >= 16 && idade < 18) || idade > 70) {
        printf("Você PODE votar, mas o voto é OPCIONAL.\n");
    } else {
        printf("Você é OBRIGADO a votar.\n");
    }

    return 0;
}
