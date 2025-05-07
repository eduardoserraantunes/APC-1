#include <stdio.h>
#include <stdlib.h>
int main(){
    int opcao = 0;
        while (opcao != 4) {
            system("clear");
    printf("+------------------------+\n");
    printf("|      MENU PRINCIPAL    |\n");
    printf("+------------------------+\n");
    printf("| 1 - novo jogo          |\n");
    printf("| 2 - ver score          |\n");
    printf("| 3 - sobre o jogo       |\n");
    printf("| 4 - sair               |\n");
    printf("+------------------------+\n");
    printf("escolha uma opcao > ");
    scanf("%i", &opcao);
    while (getchar() != '\n'); 
    break;
    }
    switch(opcao){
        case 1: {
            system("clear");
            int nivel = 0;
            printf("Nivel de jogo\n");
            printf("1 - Facil\n");
            printf("2 - Medio\n");
            printf("3 - Dificil\n");
            printf("escolha um nivel > ");
            scanf("%i", &nivel);
            while (getchar()!= '\n');
            break;
        }
        case 2:{
            system("clear");
            printf("Score do jogo\n");
            printf("1 - Jogador A - 100000 pontos\n");
            printf("2 - Jogador B - 700000 pontos\n");
            printf("3 - Jogador C - 500000 pontos\n");
            printf("4 - Jogador D - 300000 pontos\n");
            printf("5 - Jogador E - 100000 pontos\n");
            printf("Pressione enter para continuar...");
            while (getchar() != '\n');
            break;
        }
        case 3:{
            system("clear");
            printf("Sobre o jogo\n\n");
            printf("Desenvolvido em C\n");
            printf("Por Dev1 e Dev2\n\n");
            printf("Copyright(C) 2025\n");
            printf("Pressione ENTER para continuar...");
            while (getchar() != '\n');
            break; 
        
        }
        case 4:{
            system("clear");
            printf("Ate logo!\n");
            break;
        }
        default: printf("opcao invalida! tente novamente.\n");
    }

return 0;

}






