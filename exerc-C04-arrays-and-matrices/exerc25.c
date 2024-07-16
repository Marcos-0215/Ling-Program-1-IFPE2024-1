// EXERCICIOS LINGUAGEM PROGRAMACAO 1 2024.1
// C04.1 - VETORES (Arrays)
// Problem -> 25
// Finished by DD MMM 2024


#include <stdio.h>

int main() {
  printf("C04-25\n\n");
  
  int num[100];
  int sign = 0;
  int count=1;

  for (int i=0; i<sizeof(num)/sizeof(num[0]); i++) {
    sign = 0;
    while (sign == 0) {
      int last = count%10;
      
      if (count%7 != 0 || last == 7) {
        num[i] = count;
        sign = 1;
      }
    count++;
    }
  }
  
  printf("\nVetor: ");

  
  for (int i=0; i<100; i++) {
    printf("%d ", num[i]);
  }
  
  return 0;
}