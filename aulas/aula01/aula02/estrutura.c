#include <stdio.h>
#include <locale.h>
int main(){
    setlocale(LC_ALL, "");
    printf("ola\n\n");

printf("-----------------------\n");
printf("  N  O  T  A    L  E G  A  L\n");
printf("--------------------------\n");
printf("Caderno        1    r$ 10,00\n");
printf("Lapis           2   5.00\n");
printf("Borracha        1  7.50\n");
printf("Total........: 22.50\n");



printf("%s %i %f\n", "caderno", 1, 10.0);
    return 0;
}