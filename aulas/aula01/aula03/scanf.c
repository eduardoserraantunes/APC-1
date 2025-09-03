#include <stdio.h>

int main(){

    // char - carcater
    // int - inteiro
    // float - flutuante ate 6 casa
    // double - flutuante ate 12 casas 
    // void - sem tipo



    int idade = 16;
    char tecla =  's';
    float nota = 8.5;
    double PI = 3.14151669226;

    printf(" Os valores das variaveis\n");
    printf(" idade = %i\n", idade);
    printf("tecla = %c\n", tecla);
    printf("nota = %2.f\n", nota);
    printf("pi = %.12f\n", PI);

    printf("\ninforme os novos valores:\n");
    scanf("%i", &idade);
    getchar();
    scanf("%c", &tecla);
    getchar();
    scanf("%f", &nota);

  printf(" Os NOVO valoresa sao:\n");
    printf(" idade = %i\n", idade);
    printf("tecla = %c\n", tecla);
    printf("nota = %2.f\n", nota);


    return 0;
}