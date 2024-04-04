#include <stdio.h>

int main()
{
    int num;

    printf("Digite um número inteiro de 1 a 7:\n");
    scanf("%d", &num);

    switch (num) {
        case 1:
            printf("\n%d corresponde a DOMINGO", num);
            break;
        case 2:
            printf("\n%d corresponde a SEGUNDA-FEIRA.", num);
            break;
        case 3:
            printf("\n%d corresponde a TERÇA-FEIRA.", num);
            break;
        case 4:
            printf("\n%d corresponde a QUARTA-FEIRA.", num);
            break;
        case 5:
            printf("\n%d corresponde a QUINTA-FEIRA.", num);
            break;
        case 6:
            printf("\n%d corresponde a SEXTA-FEIRA.", num);
            break;
        case 7:
            printf("\n%d corresponde a SÁBADO.", num);
            break;
        default:
            printf("\nPor favor, digite número inteiro de 1 a 7.");
            break;
    }

    return 0;
}