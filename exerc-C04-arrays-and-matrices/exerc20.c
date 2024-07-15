// EXERCICIOS LINGUAGEM PROGRAMACAO 1 2024.1
// C04.1 - VETORES (Arrays)
// Problem -> 20
// Finished by 12 Jul 2024

#include <stdio.h>

int main() {
  
  int arr[10];
  int n=0;
  
  printf("10 números inteiros de 0 a 50:\n");
  for(int i=0; i<10; i++) {
    scanf("%d", arr+i);
    if (*(arr+i)%2>0) {
      n++;
    }
  }
  
  int arr2[n];
  int j=n;
  
  for (int i=9; j>0; i--) {
    if (arr[i]%2>0) {
      arr2[j-1] = arr[i];
      j--;
    }
  }
  
  printf("---------\n");
  
  for (int i=0; i<10; i+=2) {
    printf("%d %d\n", arr[i], arr[i+1]);
  }
  
  printf("---------\n");
  
  for (int i=0; i<n; i+=2) {
    if (i<n-1) {
      printf("%d %d\n", arr2[i], arr2[i+1]);
    } else {
      printf("%d\n", arr2[i]);
    }
  }
  
  return 0;
}