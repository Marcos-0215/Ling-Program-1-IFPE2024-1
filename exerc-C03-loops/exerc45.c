// Exercicios Linguagem de Programacao, Prof Marco
// C03 -> Comandos de Repeticao (Loops)
// Problema -> 45
// Finished by 03 Jul 2024

#include <stdio.h>


int main() {
  
  while (1) {
    
    printf("OPÇÕES:\n");
    // printf("(1) km/h -> m/s  (2) m/s -> km/h  (3) Finalizar programa\n");
    printf("(1) km/h -> m/s \n");
    printf("(2) m/s -> km/h\n");
    printf("(3) Finalizar programa\n");
    
    int choice;
    printf("Escolha (só nº): ");
    scanf("%d", &choice);
    
    if (choice==3) {
      break;
    } else if (choice > 3 || choice < 1) {
      printf("\nDigite opção válida. Reiniciando...\n");
      printf("-------------\n");
      continue;
    }
    
    float vel;
    printf("Velocidade: ");
    scanf("%f", &vel);
    
    printf("-------------\n");
    
    if (choice==1) {
      printf("Em m/s = %.2f\n", vel/3.6);
      printf("-------------\n");
    } else {
      printf("Em km/h = %.2f\n", vel*3.6);
      printf("-------------\n");
    }
    
  }
  
  
  return 0;
}