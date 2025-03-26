#include <stdio.h>

int main(){
    
    
    char tecla;
    int numero;
    float moeada;
    double dizima;

    tecla = 'd';
    printf("valor da tecla = %i\n", tecla);
    printf("valor da tecla = %c\n", tecla);

    numero = 4562;
    printf("valor do numero = %i\n", numero);

    moeada = 52.13f;
    printf("valor da moeada = %.2f\n", moeada);

    dizima = 1.0123456789;
    printf("valor da dizima = %10f\n", dizima);
    dizima = 2.3333333333;
    printf("valor da dizima = %10f\n", dizima);

    
    return 0;



}