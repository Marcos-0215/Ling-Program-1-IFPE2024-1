#include <stdio.h>
#include <math.h>

int main()
{
    printf("C02-39 REAJUSTE SALARIAL\n\n");
    
    float salario, novo;
    int tempo;
    
    printf("Digite o valor do salário do funcionário:\nR$ ");
    scanf("%f", &salario);
    
    if (salario > 2000.00) {
        novo = salario;
    } else if (salario > 1500.00) {
        novo = salario * 1.1;
    } else if (salario > 1000.00) {
        novo = salario * 1.15;
    } else if (salario > 500.00) {
        novo = salario * 1.2;
    } else if (salario > 0.00) {
        novo = salario * 1.25;
    } else {
        printf("\nDigite um valor de salário valido.");
        return 1;
    }
    
    printf("Digite o tempo de serviço do funcionário (em anos):\n");
    scanf("%d", &tempo);
   
    if (tempo > 10) {
        novo += 500;
    } else if (tempo >= 7) {
        novo += 300;
    } else if (tempo >= 4) {
        novo += 200;
    } else if (tempo >= 1) {
        novo += 100;
    } else if (tempo < 0) {
        printf("\nDigite um valor de tempo válido.");
        return 1;
    }
    

    if (novo > salario) {
        printf("\nSalário final reajustado: R$ %.2f", novo);
    } else {
        printf("\nO funcionário não tem direito a aumento.");
    }
    
    
    return 0;
}