#include <stdio.h>

int main() {
    int num;
    float harm = 0.0;

    printf("Digite um numero inteiro positivo: ");
    scanf("%d", &num);
    
    if (num <= 0) {
        printf("\nO numero digitado não é positivo.\n");
        return 1;
    }
    
    for (int i=1; i<=num; i++) {
        harm += 1/(float)i;
    }

    printf("\nO seu número harmônico é: %f", harm);
    
    return 0;
}