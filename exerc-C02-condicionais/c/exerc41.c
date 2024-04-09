#include <stdio.h>

int main()
{
    printf("C02-41 CLASSIFICAÇÃO IMC\n\n");
    
    float peso, altura, imc;

    printf("\nDigite seu peso (em kg): ");
    scanf("%f", &peso);

    printf("Digite sua altura (em m): ");
    scanf("%f", &altura);

    imc = peso/(altura*altura);

    if (imc >= 40.0) {
        printf("\nClassificação: Obesidade Grau III (mórbida)");
    } else if (imc >= 35.0) {
        printf("\nClassificação: Obesidade Grau II (severa)");
    }  else if (imc >= 30.0) {
        printf("\nClassificação: Obesidade Grau I");
    } else if (imc >= 25.0) {
        printf("\nClassificação: Peso em excesso");
    } else if (imc >= 18.6) {
        printf("\nClassificação: Saudável");
    } else if (imc >= 0.0) {
        printf("\nClassificação: Abaixo do Peso");
    }
    

    return 0;
}