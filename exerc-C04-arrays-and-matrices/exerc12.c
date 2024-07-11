// EXERCICIOS LINGUAGEM PROGRAMACAO 1 2024.1
// C04 - VETORES (Arrays)
// Problem -> 12
// Finished by 17 Jun 2024

#include <stdio.h>

int main() {
    
    float arr[5];
    
    printf("Digite 5 valores:\n");
    
    for (int i=0; i<sizeof(arr)/sizeof(arr[0]); i++) {
        scanf("%f", &arr[i]);
    }
    
    printf("\n");
    
    printf("Valores lidos: ");
    for (int i=0; i<sizeof(arr)/sizeof(arr[0]); i++) {
        printf("%.2f | ", arr[i]);
    }
    
    printf("\n");
    
    float max=-999999.9;
    printf("Maior valor: ");
    for (int i=0; i<sizeof(arr)/sizeof(arr[0]); i++) {
        if (arr[i]>max) {
            max = arr[i];
        }
    }
    printf("%.2f\n", max);
    
    
    float min=999999.9;
    printf("Menor valor: ");
    for (int i=0; i<sizeof(arr)/sizeof(arr[0]); i++) {
        if (arr[i]<min) {
            min = arr[i];
        }
    }
    printf("%.2f\n", min);
    
    float avg=0;
    printf("Média dos valores: ");
    for (int i=0; i<sizeof(arr)/sizeof(arr[0]); i++) {
        avg+=arr[i];
    }
    avg/=sizeof(arr)/sizeof(arr[0]);
    printf("%.2f\n", avg);
    
    return 0;
}