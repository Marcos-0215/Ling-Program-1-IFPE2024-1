// EXERCICIOS EM AULA LINGUAGEM PROGRAMACAO 1 2024.1
// Class 09 Jul 2024
// Problem -> 01 (Program that receives 5 grades and prints the grades avarage, the student's situation (approved or not), and the standard deviation.)

// Finished by 09 Jul 2024


// Programa que receba 5 notas de mini-avaliações, e informe a média, se está aprovado (média maior ou igual a 7,0), e o desvio padrão.


#include <stdio.h>
#include <math.h>

#define QNT 5

int main() {
  
  float notas[QNT];
  float total=0.0;
  
  printf("Digite as %d notas das mini-avaliações:\n", QNT);
  
  for (int i=0; i<QNT; i++) {
    scanf("%f", notas+i);
    total+=*(notas+i);
  }
  
  printf("-----------\n");
  
  printf("MÉDIA: %.2f\n", total/QNT);
  
  if (total/QNT>=7.0) {
    printf("APROVADO (média maior ou igual a 7.0)\n");
  } else {
    printf("REPROVADO (média menor que 7.0)\n");
  }
  
  float dp=0;
  
  for (int i=0; i<QNT; i++) {
    dp += (notas[i] - total/QNT) * (notas[i] - total/QNT);
  }
  
  dp /= QNT;
  dp = sqrt(dp);
  printf("DESVIO PADRÃO: %f", dp);
   
  
  return 0;
}