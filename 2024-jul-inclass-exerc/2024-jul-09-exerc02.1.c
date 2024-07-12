// EXERCICIOS EM AULA LINGUAGEM PROGRAMACAO 1 2024.1
// Class 09 Jul 2024
// Problem -> 02 (Program that receives a decimal number and prints it in binary)

// Finished by 09 Jul 2024

// Criar programa que receba número decimal e transforme em binário, usando algoritmo de transformação manual que fazemos no papel.


#include <stdio.h>
#include <math.h>

int main() {
  
  int n;
  printf("Digite um número no sistema decimal:\n");
  scanf("%d", &n);
  
  int x=n;
  int count=0;
  
  while (x>0) {
    x /= 2;
    count++;
  }
    
  //printf("%d", count);
  
  int arr[count];
  x=n;
  
  for (int i=0; i<count; i++) {
    arr[i] = x%2;
    x/=2;
  }
  
  printf("--------\n");
  printf("%d em binário é: ", n);
  
  for (int i=count-1; i>=0; i--) {
    printf("%d", arr[i]);
  }
  
  return 0;
}