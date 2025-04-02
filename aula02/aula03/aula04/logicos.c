#include <stdio.h>
int main(){
        // && operador E
        // || operador OU
        // ! operador NAo

       
    printf("Tabela da Verdade\n");
    printf("0 E 0 = %i\n", 0 && 0);
    printf("0 E 1 = %i\n", 0 && 1);
    printf("1 E 0 = %i\n", 1 && 0);
    printf("1 E 1 = %i\n", 1 && 1);
    printf("\n");
    printf("0 OU 0 = %i\n", 0 || 0);
    printf("0 OU 1 = %i\n", 0 || 1);
    printf("1 OU 0 = %i\n", 1 || 0);
    printf("1 OU 1 = %i\n", 1 || 1);
    printf("\n");
    printf("NAO 0 = %i\n", !0);
    printf("NAO 1 = %i\n", !1);
   
   
   
    return 0;

}