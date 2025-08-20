#include <stdio.h>

    int main(){

        char nome_produto[31];
        int quantidade;
        float preco;
        float valor_total;

        printf ("entre com o nome do produtor: ");
        scanf("%[^\n]s", nome_produto);
        getchar();


        printf("entre com a quantidade do produto: ");
        scanf("%i", &quantidade);
        getchar();


        printf("entre com o preco do produto: ");
        scanf("%f", &preco);
        getchar();

        valor_total = preco * quantidade;

        printf("NOTA LEGAL\n");
        printf("intem          Qtd preco valor\n");
        printf("%-15s %03i %7.2f\n", nome_produto, quantidade, preco, valor_total);
        printf("total; %15.2f", valor_total);




        return 0;
    }