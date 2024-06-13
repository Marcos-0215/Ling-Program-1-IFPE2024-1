#include <stdio.h>

int main()
{
    // C02  - 14

    float nota1, nota2, nota3, media;
    
    printf("Digite a nota do Trabalho de Laboratório (peso 2):\n");
    scanf("%f", &nota1);
    
    printf("Digite a nota da Avaliação Semestral (peso 3):\n");
    scanf("%f", &nota2);
    
    printf("Digite a nota do Exame Final (peso 5):\n");
    scanf("%f", &nota3);
    
    media = (2*nota1 + 3*nota2 + 5*nota3) / 10;

    if (media >= 4.95) {
        printf("\nMédia Final: %.1f", media);
        printf("\nAPROVADO(A)!");
    } else {
        if (media >= 2.95) {
            printf("\nMédia Final: %.1f", media);
            printf("\nEM RECUPERAÇÃO!");
        } else {
            printf("\nMédia Final: %.1f", media);
            printf("\nREPROVADO(A)!");
        }
    };

    return 0;
}