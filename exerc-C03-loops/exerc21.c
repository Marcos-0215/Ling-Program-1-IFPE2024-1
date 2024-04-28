#include <stdio.h>

int main() {
    printf("C03-21\n\n");
    
    int num1, num2;
    
    printf("Digite 2 números inteiros: ");
    scanf("%d", &num1);
    scanf("%d", &num2);
    
    if (num1 > num2) {
        int temp = num1;
        num1 = num2;
        num2 = temp;
    }
    
    int soma = num1+num2, mult = num1*num2;

    for (int i=num1+1; i<num2; i++) {
        if (i%2==0) {
            soma+=i;
        } else {
            mult*=i;
        }
    }
    
    printf("\nSOMA = %d", soma);
    printf("\nMULTIPLICAÇÃO = %d", mult);
    
    
    return 0;
}