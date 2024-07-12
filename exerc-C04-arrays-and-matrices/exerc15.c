// EXERCICIOS LINGUAGEM PROGRAMACAO 1 2024.1
// C04.1 - VETORES (Arrays)
// Problem -> 15
// Finished by 02 Jul 2024


#include <stdio.h>

int main() {
  
  int arr[20];
  
  for(int i=0; i<20; i++) {
    scanf("%d", &arr[i]);
  }
  
  printf("\n");
  printf("RESULTADO:\n");
  
  for(int i=0; i<20; i++) {
    int check=0;
    for (int j=0; j<i; j++) {
      if (arr[i]==arr[j]) {
        check=1;
      }
    }
    if (check==0) {
      printf("%d ", arr[i]);  
    }
    
  }
  
  return 0;
}