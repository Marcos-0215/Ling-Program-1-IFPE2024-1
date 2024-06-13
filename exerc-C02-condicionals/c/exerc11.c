#include <stdio.h>

int main()
{
    int num;
    int dig1;
    int dig2;
    int dig3;
    int dig4;

    printf("Digite um número inteiro maior que zero:\n");
    scanf("%d", &num);

    if (num <= 0) {
        printf("Número inválido.");
    } else {
        dig1 = num / 1000;
        dig2 = (num - dig1*1000) / 100;
        dig3 = (num - dig1*1000 - dig2*100) / 10;
        dig4 = (num - dig1*1000 - dig2*100 - dig3*10);

        printf("Resultado: %d", dig1+dig2+dig3+dig4);
    }

    return 0;
}