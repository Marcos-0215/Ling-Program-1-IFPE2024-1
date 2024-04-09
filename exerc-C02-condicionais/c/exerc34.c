#include <stdio.h>

int main()
{
    float nota;
    int faltas;
    
    printf("Digita a nota do aluno: ");
    scanf("%f", &nota);
    printf("Digite o número de faltas do aluno: ");
    scanf("%d", &faltas);
    
    if (faltas < 0 || nota < 0.0 || nota > 10.0) {
        printf("Dado(s) inválido(s).");
        return 1;
    } else if (faltas <= 20) {
        if (nota >= 9.0 && nota <= 10.0) {
            printf("O conceito do aluno é A.");
        }
        if (nota >= 7.5 && nota <= 8.9) {
            printf("O conceito do aluno é B.");
        }
        if (nota >= 5.0 && nota <= 7.4) {
            printf("O conceito do aluno é C.");
        }
        if (nota >= 4.0 && nota <= 4.9) {
            printf("O conceito do aluno é D.");
        }
        if (nota >= 0.0 && nota <= 3.9) {
            printf("O conceito do aluno é E.");
        }
    } else {
        if (nota >= 9.0 && nota <= 10.0) {
            printf("O conceito do aluno é B.");
        }
        if (nota >= 7.5 && nota <= 8.9) {
            printf("O conceito do aluno é C.");
        }
        if (nota >= 5.0 && nota <= 7.4) {
            printf("O conceito do aluno é D.");
        }
        if (nota >= 0.0 && nota <= 4.9) {
            printf("O conceito do aluno é E.");
        }
    }
    

    return 0;
}