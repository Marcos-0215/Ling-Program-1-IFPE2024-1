// Exercicios Linguagem de Programacao, Prof Marco
// C03 -> Comandos de Repeticao (Loops)
// Questao 34
// Finished by 20 Jun 2024


#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {
    
  int range=20;
  int result=0;
  int stop=0;
  
  while (stop==0) {
    stop=0;
    result++;
    
    for (int i=1; i<=range; i++) {
      
      if (result%i==0) {
        stop++;
      } else {
        stop=0;
        break;
      }
    }
    
  }
  
  printf("Menor número divisível por cada número de 1 a %d:\n", range);
  printf("%d\n", result);
  
  return 0;
}