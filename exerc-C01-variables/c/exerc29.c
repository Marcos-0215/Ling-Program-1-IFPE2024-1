#include <stdio.h>

int main()
{

    float nota1;
    float nota2;
    float nota3;
    float nota4;
    float media;

    printf("Insira as 4 notas, para obter a média aritmética.\n");
    
    printf("\nPrimeira Nota: ");
    scanf("%f", &nota1);
    printf("Segunda Nota: ");
    scanf("%f", &nota2);
    printf("Terceira Nota: ");
    scanf("%f", &nota3);
    printf("Quarta Nota: ");
    scanf("%f", &nota4);
    
    media = (nota1 + nota2 + nota3 + nota4) / 4;
    
    printf("\nMédia aritmética das notas\n= %.2f", media);

    return 0;

}