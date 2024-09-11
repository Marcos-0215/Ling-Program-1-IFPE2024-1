// MINI-AVALIAÇÃO 20/08/2024 VETORES
// LINGUAGEM DE PROGRAMACAO (Prof Marco Domingues)

/*
QUESTÃO 04:
4) Criar uma função que receba um vetor de inteiros e retorne o menor valor?
*/


#include <stdio.h>
#include <string.h>


int acharMenor(int arr[10]) {
  int menor = arr[0];
  for (int i=1; i<10; i++) {
    if (arr[i]<menor) {
      menor = arr[i];
    }
  }
  return menor;
}

int main() {
  
  int arr[10];
  printf("Digite 10 inteiros: ");
  for (int i=0; i<10; i++) {
    scanf("%d", arr+i);
  }
  
  printf("---------------\n");
  printf("Menor valor = %d\n", acharMenor(arr));
  
  return 0;
}