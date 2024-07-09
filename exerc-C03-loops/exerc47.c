// Exercicios Linguagem de Programacao, Prof Marco
// C03 -> Comandos de Repeticao (Loops)
// Problema -> 47
// Finished by 04 Jul 2024

#include <stdio.h>

int main() {
  
  while (1) {
    
    printf("OPÇÕES:\n");
    printf("(1) Adição \n");
    printf("(2) Subtração\n");
    printf("(3) Multiplicação\n");
    printf("(4) Divisão\n");
    printf("(5) Saída\n");
    
    int choice;
    printf("Escolha (só nº): ");
    scanf("%d", &choice);
    
    if (choice==5) {
      break;
    } else if (choice > 5 || choice < 1) {
      printf("\nDigite opção válida. Reiniciando...\n");
      printf("-------------\n");
      continue;
    }
    
    float n1, n2;
    
    
    printf("-------------\n");
    
    if (choice==1) {
      printf("X + Y\n");
      printf("X: ");
      scanf("%f", &n1);
      printf("Y: ");
      scanf("%f", &n2);
      printf("RESULTADO = %.2f\n", n1+n2);
      printf("-------------\n");
    } else if (choice==2) {
      printf("X - Y\n");
      printf("X: ");
      scanf("%f", &n1);
      printf("Y: ");
      scanf("%f", &n2);
      printf("RESULTADO = %.2f\n", n1-n2);
      printf("-------------\n");
    } else if (choice==3) {
      printf("X x Y\n");
      printf("X: ");
      scanf("%f", &n1);
      printf("Y: ");
      scanf("%f", &n2);
      printf("RESULTADO = %.2f\n", n1*n2);
      printf("-------------\n");
    } else if (choice==4) {
      printf("X / Y\n");
      printf("X: ");
      scanf("%f", &n1);
      printf("Y: ");
      scanf("%f", &n2);
      printf("RESULTADO = %.2f\n", n1/n2);
      printf("-------------\n");
    }
    
  }
  
  
  return 0;
}