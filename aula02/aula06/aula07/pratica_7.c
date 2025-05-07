#include <stdio.h>

int main() {
   
    for(int i = 0; i < 10; i++) {
        printf("%i ", i);
    }

   
    for(int i = 9; i >= 0; i--) {
        printf("%i ", i);
    }

   
    for(;;) {
        printf("Ao infinito!\n");
    }

    return 0;
}
