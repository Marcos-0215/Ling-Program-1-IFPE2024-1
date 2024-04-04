#include <stdio.h>

int main () {
    
    int idade, tempo;
    
    printf("Digite a sua idade (anos): ");
    scanf("%d", &idade);
    printf("Digite o tempo de serviço (anos): ");
    scanf("%d", &tempo);
    
    if (idade >= 65 || tempo >= 30 || (idade >= 60 && tempo >= 25)) {
        printf("\nPode se aposentar!");
    } else {
        printf("\nNÃO pode se aposentar!");
    }
    return 0;
}