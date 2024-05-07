#include <stdio.h>

int main() {
    printf("C03-30\n\n");
    
    int n;
    int seq1=0;
    int seq2=0;
    int seq3=0;

    printf("Digite um número inteiro positivo: ");
    scanf("%d", &n);

    for (int i=0; i<=n; i++) {
        seq1 += i;
    }
    
    for (int i=1;i<=(2*n - 1); i+=2) {
        seq2 += i;
    }
    for (int i=2;i<=(2*n - 1); i+=2) {
        seq2 -= i;
    }
    
    for (int i=1; i<=(2*n - 1); i+=2) {
        seq3 += i;
    }
    
    printf("\nValor da sequencia 1:\n%d\n", seq1);
    printf("\nValor da sequencia 2:\n%d\n", seq2);
    printf("\nValor da sequencia 3:\n%d\n", seq3);
    
    return 0;
}