#include <stdio.h>

int main()
{
    int num;

    printf("Digite um número inteiro de 1 a 12:\n");
    scanf("%d", &num);

    switch (num) {
        case 1:
            printf("\n%d corresponde a JANEIRO", num);
            break;
        case 2:
            printf("\n%d corresponde a FEVEREIRO", num);
            break;
        case 3:
            printf("\n%d corresponde a MARÇO", num);
            break;
        case 4:
            printf("\n%d corresponde a ABRIL", num);
            break;
        case 5:
            printf("\n%d corresponde a MAIO", num);
            break;
        case 6:
            printf("\n%d corresponde a JUNHO", num);
            break;
        case 7:
            printf("\n%d corresponde a JULHO", num);
            break;
        case 8:
            printf("\n%d corresponde a AGOSTO", num);
            break;
        case 9:
            printf("\n%d corresponde a SETEMBRO", num);
            break;
        case 10:
            printf("\n%d corresponde a OUTUBRO", num);
            break;
        case 11:
            printf("\n%d corresponde a NOVEMBRO", num);
            break;
        case 12:
            printf("\n%d corresponde a DEZEMBRO", num);
            break;
        default:
            printf("\nPor favor, digite número inteiro de 1 a 12.");
            break;
    }

    return 0;
}