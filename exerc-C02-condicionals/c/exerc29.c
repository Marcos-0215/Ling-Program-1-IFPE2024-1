#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main () {

    int x, y, resp, acertos = 0;
    
    srand(time(NULL));
    int min = 1;
    int max = 100;
    
    x=0;
    y=0;
    
    for (int i = 1; i <= 5; i++) {
        x=rand() % (max - min + 1) + min;
        y=rand() % (max - min + 1) + min;
        
        printf("PERGUNTA %d de 5\n", i);
        printf("Qual é a soma de %d + %d?\n", x, y);
        scanf("%d", &resp); 
        
        if (resp == x + y) {
            printf("CORRETO!\n\n");
            acertos++;
        } else {
            printf("Errou essa.\n");
            printf("Resposta correta: %d\n\n", x + y);
        }
    }
    
    printf("\nQuantidade de acertos: %d\n", acertos);
    
    return 0;
}