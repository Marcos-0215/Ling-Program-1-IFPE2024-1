// EXERCICIOS LINGUAGEM PROGRAMACAO 1 2024.1
// C04.1 - VETORES (Arrays)
// Problem -> 14
// Finished by 26 Jun 2024

// (demorei um pouco, uns 15min, para bolar forma de corrigir numeros repetidos mais de 1 vez)


#include <stdio.h>
#include <string.h>

#define QNTVETOR 10

int main() {
  
  int valores[QNTVETOR];
  
  printf("Digite 5 numeros inteiros:\n");
  for (int i=0; i<QNTVETOR; i++) {
    scanf("%d", &valores[i]);
  }
  
  int result[QNTVETOR/2];
  memset(result, 0, sizeof(result));
  int resIdx=0;
  
  for (int i=0; i<QNTVETOR; i++) {
    
    for (int j=1+i; j<QNTVETOR; j++) {
    int end=0;
    
    for (int k=0; k<resIdx; k++) {
      if (result[k]==valores[j]) {
        end = 1;
        break;
      }
    }
    
    if (end==1) {
      continue;
    }
    
    if (valores[i]==valores[j]) {
      result[resIdx] = valores[i];
      resIdx++;
    }
    
    }
  }
  
  printf("\n");
  printf("Valores iguais:\n");
  
  for (int i=0; i<resIdx; i++) {
    printf("%d ", result[i]);
  }
  
  return 0;
}