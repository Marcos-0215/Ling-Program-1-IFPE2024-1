#include <stdio.h>
#include <string.h>

int main()
{
    
    int num;
    
    printf("Digite um número inteiro: ");
    scanf("%d", &num);
    printf("\n");
    
    for (int i = 1; i <= num; i++) {
        printf("%d  ", i*2);
    }

    return 0;
}