// Exercicios Linguagem de Programacao, Prof Marco
// C03 -> Comandos de Repeticao (Loops)
// Problema -> 59
// Finished by 09 Jul 2024

#include <stdio.h>


int main() {
  
  int n;
  float kwh;
  
  printf("Digite o número de habitantes: ");
  scanf("%d", &n);
  
  printf("Digite o valor do kWh: ");
  scanf("%f", &kwh);
  
  printf("-----------\n");
  
  float consumos[n];
  int cod[n];
  float somaConsumos=0, maiorCons, menorCons;
  
  for (int i=0; i<n; i++) {
    printf("Digite o consumo do mês para habitante nº %d: ", i+1);
    scanf("%f", consumos+i);
    
    somaConsumos+= consumos[i];
    
    if (i==0) {
      maiorCons = consumos[i];
      menorCons = consumos[i];
    } else {
      
      if (consumos[i]>maiorCons) {
        maiorCons = consumos[i];
      }
      
      if (consumos[i]<menorCons) {
        menorCons = consumos[i];
      }
      
    }
    
    while (1) {
      printf("Digite o código do habitante nº %d:\n", i+1);
      printf("(1) Residencial\n");
      printf("(2) Comercial\n");
      printf("(3) Industrial\n");
      printf("OPÇÃO: ");
      scanf("%d", cod+i);
      
      if (cod[i]==1 || cod[i]==2 || cod[i]==3) {
        break;
      } else {
        printf("\n");
        printf("ERRO!\nDigite uma opção válida. Tente novamente.\n");
        printf("\n");
      }
    }
    
    printf("-----------\n");
  }
  
  printf("MAIOR consumo: %.2f\n", maiorCons);
  printf("MENOR consumo: %.2f\n", menorCons);
  printf("MÉDIA consumo: %.2f\n", somaConsumos/n);
  
  printf("-----------\n");
  
  float cat1=0, cat2=0, cat3=0;
  
  
  for (int i=0; i<n; i++) {
    
    if (cod[i]==1) {
      cat1+=consumos[i];
    }
    
    if (cod[i]==2) {
      cat2+=consumos[i];
    }
    
    if (cod[i]==3) {
      cat3+=consumos[i];
    }
    
  }
  
  printf("Consumo total da categoria (1): %.2f\n", cat1);
  printf("Consumo total da categoria (2): %.2f\n", cat2);
  printf("Consumo total da categoria (3): %.2f\n", cat3);
  
  return 0;
}