// Exercicios Linguagem de Programacao, Prof Marco
// C03 -> Comandos de Repeticao (Loops)
// Problema -> 50
// Finished by 05 Jul 2024

#include <stdio.h>

struct altCresc {
  float altura;
  float crescimento;
};

int main() {
  
  struct altCresc chico;
  struct altCresc ze;
  
  chico.altura = 1.5;
  chico.crescimento = 2;
  
  ze.altura = 1.1;
  ze.crescimento = 3;
  
  int anos=0;
  
  // MÉTODO MATEMÁTICO
  //printf("Anos depois: %.0f\n", ((chico.altura - ze.altura)*100)/(ze.crescimento - chico.crescimento) + 1);
  
  
  while (ze.altura<=chico.altura) {
    
    chico.altura += chico.crescimento/100;
    ze.altura += ze.crescimento/100;
    anos++;
    
    //printf("ANO: %d\n", anos);
    //printf("chico: %.2f\n", chico.altura);
    //printf("Ze: %.2f\n", ze.altura);
    //printf("------------------\n");
    
  }
  
  printf("Anos depois: %d\n", anos);
  
  
  
  
  return 0;
}