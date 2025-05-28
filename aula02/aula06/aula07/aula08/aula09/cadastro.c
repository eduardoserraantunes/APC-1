#include <stdio.h>
#include <string.h>

struct cliente_t {
    char nome[31];
    char telefone[15];
    char email[61];
    char logradouro[61];
    int numero;
    char cep[11];
    char complemento[61];
    char cidade[61];
    char uf[3];
};

int main() {
    struct cliente_t cliente;

    strcpy(cliente.nome, "EDUARDO");
    strcpy(cliente.telefone, "611111111");
    strcpy(cliente.email, "eduardo@exemplo.com");
    strcpy(cliente.logradouro, "SQS");
    cliente.numero = 612;
    strcpy(cliente.cep, "70000000");
    strcpy(cliente.complemento, "IESB");
    strcpy(cliente.cidade, "Brasilia");
    strcpy(cliente.uf, "DF");

    printf("Dados do cliente\n");
    printf("Nome: %s\n", cliente.nome);
    printf("Telefone: %s\n", cliente.telefone);
    printf("E-mail: %s\n", cliente.email);
    printf("Endereco: %s %d - %s - %s/%s\n",
           cliente.logradouro, cliente.numero, cliente.complemento, cliente.cidade, cliente.uf);
    printf("CEP: %s\n", cliente.cep);

    struct cliente_t clientes[10];



    for (int i = 0; i<10; i++){

        printf("Cliente %i\n", i+1);
        printf("entre com o nome do cliente:  ");
        scanf("%s", clientes[i].nome);

        printf("entre com o telefone do cliente:  ");
        scanf("%i", &clientes[i].telefone);

        printf(" entre com o endereco do cliente:  ");
        printf("logradouro: ");
        scanf("%s", clientes[i].logradouro);
        
        printf("numero: ");
        scanf("%i", clientes[i].numero);

        printf("complemento");
        scanf("%s", clientes[i].complemento);

        printf("cidade: ");
        scanf("%s", clientes[i].cidade);

        printf("uf: ");
        scanf("%s", clientes[i].uf);

        printf("CEP:  ");
        scanf("%i" clientes[i].cep);




    }

    return 0;
}
