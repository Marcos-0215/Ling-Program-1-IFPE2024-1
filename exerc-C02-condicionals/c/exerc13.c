#include <stdio.h>

int main()
{
    // C02 - 13

    float nota1, nota2, nota3, media;
    
    printf("Digite a nota da 1ª prova:\n");
    scanf("%f", &nota1);
    
    printf("Digite a nota da 2ª prova:\n");
    scanf("%f", &nota2);
    
    printf("Digite a nota da 3ª prova:\n");
    scanf("%f", &nota3);
    
    media = (nota1 + nota2 + 2*nota3) / 4;

    if (media >= 60) {
        printf("\nMédia Final: %.1f", media);
        printf("\nAPROVADO(A)!");
    } else {
        printf("\nMédia Final: %.1f", media);
        printf("\nREPROVADO(A)!");
    };

    return 0;
}