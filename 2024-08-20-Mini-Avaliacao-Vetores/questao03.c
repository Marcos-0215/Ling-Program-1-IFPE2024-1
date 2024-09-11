// MINI-AVALIAÇÃO 20/08/2024 VETORES
// LINGUAGEM DE PROGRAMACAO (Prof Marco Domingues)

/*
QUESTÃO 03:
3) Criar uma função que receba um vetor de inteiros e retorne o maior valor?
*/


#include <stdio.h>
#include <string.h>


int acharMaior(int arr[10]) {
  int maior = arr[0];
  for (int i=1; i<10; i++) {
    if (arr[i]>maior) {
      maior = arr[i];
    }
  }
  return maior;
}

int main() {
  
  int arr[10];
  printf("Digite 10 inteiros: ");
  for (int i=0; i<10; i++) {
    scanf("%d", arr+i);
  }
  
  printf("---------------\n");
  printf("Maior valor = %d\n", acharMaior(arr));
  
  return 0;
}
