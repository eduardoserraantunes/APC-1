#include <stdio.h>
int main(){

int numero = 0;

    while (numero < 1 || numero > 10){
    printf("entre com um numero inteiro 1 e10: ");
    scanf("%i", &numero);
    while (getchar()!= '\n'); 
}

    do{
    printf("entre com um numero inteiro 1 e10: ");
    scanf("%i", &numero);
 while (getchar()!= '\n'); 
   while (numero < 1 || numero > 10)
     
}
printf("A tabuada de %i eh\n", numero);









    return 0;
}  