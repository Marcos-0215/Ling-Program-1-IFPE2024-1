// EXERCICIOS LINGUAGEM PROGRAMACAO 1 2024.1
// C04.1 - VETORES (Arrays)
// Problem -> 01
// Finished by ?? ?? 2024

#include <stdio.h>

int main()
{
  int A[6];
  
  //(a)
  
  A[0] = 1;
  A[1] = 0;
  A[2] = 5;
  A[3] = -2;
  A[4] = -5;
  A[5] = 7;
  
  //(b)
  
  int soma;
  
  soma = A[0] + A[1] + A[5];
  
  printf("(b) Soma: %d\n\n", soma);
  
  //(c)
  
  A[4] = 100;
  
  //(d)
  
  printf("(d)\n");
  
  for (int i=0; i<(sizeof(A)/sizeof(A[0])); i++) {
    
    printf("%d\n", A[i]);
  }
  

  return 0;
}