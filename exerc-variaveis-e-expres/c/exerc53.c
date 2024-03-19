#include <stdio.h>

int main()
{
    float comp;
    float larg;
    float tela;
    float custo;
    
    printf("Digite o comprimento do terreno:\n");
    scanf("%f", &comp);
    printf("Digite a largura do terreno:\n");
    scanf("%f", &larg);
    
    printf("Digite o preço do metro de tela:\n");
    scanf("%f", &tela);
    
    
    custo = (2*comp + 2*larg) * tela;
    
    printf("\nO custo para cercar o terreno com tela é:\nR$ %.2f", custo);

    return 0;
}