#include <stdio.h>

int main(){

    // char 'A', 'a'
    // int -124, 0, 1234
    // float -8.123456, 0.0, 0.6655666f
    // double -9.123456789012345, 5.0123456789012345
    // void sem tipo 

    printf("o tipo char ocupa %i bytes e vai de %i a %i\n", sizeof(char),-127,128);
    printf("o tipo int ocupa %i bytes e vai de %i a %i\n", sizeof(int),-2474836648,21474836648);
    printf("o tipo float ocupa %i bytes e vai de %i a %i\n", sizeof(float),-3.4E+38,3.4E+38);
    printf("o tipo double ocupa %i bytes e vai de %i a %i\n", sizeof(double),-1.8E+308,1.8E+308 );
    printf("o tipo void ocupa %i bytes e vai de %i a %i\n", sizeof(void));


    return 0;
}