// Exercicios Linguagem de Programacao, Prof Marco
// C05 - 18
// [Feito 12/06/2024]


#include <stdio.h>
#include <string.h>

int main() {
    
    char str[501];
    char letra1, letra2;
    
    printf("Digite uma string: ");
    scanf("%s", str);
    getchar();
    printf("Digite a letra 1: ");
    scanf("%c", &letra1);
    getchar();
    printf("Digite a letra 2: ");
    scanf("%c", &letra2);
    getchar();
    
    for (int i=0; str[i]!='\0'; i++) {
        
        if (str[i]==letra1) {
            str[i]=letra2;
        }
    }
    
    printf("\nResultado: %s\n", str);
    
    return 0;
}