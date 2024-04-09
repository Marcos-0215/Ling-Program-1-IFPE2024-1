#include <stdio.h>

int main()
{
    printf("C02-35 DATA VÁLIDA\n\n");
    
    int dia, mes, ano;
    int tipo = 0, biss = 0;
    
    printf("Digite um data (DIA MES ANO):");
    scanf("%d", &dia);
    scanf("%d", &mes);
    scanf("%d", &ano);

    if (mes < 1 || mes > 12) {
        printf("\nMês inválido. Digite mês entre 1 e 12.");
        return 1;
    }
    
    if (dia < 1) {
        printf("\nDia não pode ser zero ou negativo.");
        return 1;
    }
    
    if (mes == 1 || mes == 3 || mes == 5 || mes == 7 || mes == 8 || mes == 10 || mes == 12) {
        tipo = 1; // ate 31 dias
    } else {
        tipo = 2; // ate 30 dias
    }
    
     if (ano%400 == 0 || (ano%4 == 0 && ano%100 != 0)) {
        biss = 1;
    }

    if (mes == 2) {
        if (dia > 28 && biss == 0) {
            printf("\nDia inválido. Para o mês 02 em ano não-bissexto, digite dia entre 1 a 28.");
            return 1;
        }
        if (dia > 29 && biss == 1) {
            printf("\nDia inválido. Para o mês 02 em ano bissexto, digite dia entre 1 a 29.");
            return 1;
        }
    }
    
    if (tipo == 1 && dia > 31) {
        printf("\nDia inválido. Para o mês %d, digite dia entre 1 a 31.", mes);
        return 1;
    }
    
    if (tipo == 2 && dia > 30) {
        printf("\nDia inválido. Para o mês %d, digite dia entre 1 a 30.", mes);
        return 1;
    }
    
    printf("\nDATA VÁLIDA: %.2d/%.2d/%d", dia, mes, ano);

    return 0;
}