// MINI-AVALIAÇÃO 20/08/2024 VETORES
// LINGUAGEM DE PROGRAMACAO (Prof Marco Domingues)

/*
QUESTÃO 05:
5) Criar uma função que receba um vetor de inteiros por parâmetro e ordene esse vetor utilizando a função maior OU a função menor das questões anteriores. Inspire-se no método da bolha?
*/


#include <stdio.h>
#include <string.h>


int acharMenor(int arr[10], int size) {
  int menor = arr[0];
  for (int i=1; i<size; i++) {
    if (arr[i]<menor) {
      menor = arr[i];
    }
  }
  return menor;
}


void ordenar(int arr[10]) {
  
  for (int i=0; i<10; i++) {
    int min = acharMenor(arr+i, 10-i);
    
    int minIdx;
    for (int j=i; j<10; j++) {
      if (arr[j]==min) {
        minIdx = j;
      }
    }
    
    int temp = arr[i];
    arr[i] = min;
    arr[minIdx] = temp;
  }
}


int main() {
  
  int arr[10];
  printf("Digite 10 inteiros: ");
  for (int i=0; i<10; i++) {
    scanf("%d", arr+i);
  }
  
  ordenar(arr); // CHAMANDO FUNÇÃO DE ORDENAÇÃO
  
  printf("---------------\n");
  printf("ORDENADO:\n");
  
  for (int i=0; i<10; i++) {
    printf("%d ", arr[i]);
  }
  
  return 0;
}