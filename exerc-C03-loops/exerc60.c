// Exercicios Linguagem de Programacao, Prof Marco
// C03 -> Comandos de Repeticao (Loops)
// Problema -> 60
// Finished by 10 Jul 2024

#include <stdio.h>
#include <math.h>

int main() {
  
  int qnt=0, qntPares=0;
  float soma=0, media, maior=-999999, menor=999999, somaPares=0, mediaPares;
  
  while (1) {
    float num;
    
    printf("Número: ");
    scanf("%f", &num);
    
    if (num==0) break;
    
    printf("----------\n");
    
    soma+=num;
    printf("(a) Soma dos números digitados:\n");
    printf("%f\n", soma);
    printf("----------\n");
    
    qnt++;
    printf("(b) Quantidade de números digitados:\n");
    printf("%d\n", qnt);
    printf("----------\n");
    
    media = soma/qnt;
    printf("(c) Média de números digitados:\n");
    printf("%f\n", media);
    printf("----------\n");
    
    if (num>maior) maior = num;
    
    printf("(d) Maior número digitado:\n");
    printf("%f\n", maior);
    printf("----------\n");
    
    if (num<menor) menor = num;
    
    printf("(e) Menor número digitado:\n");
    printf("%f\n", menor);
    printf("----------\n");
    
    if (num - floor(num)==0 && (int)num%2==0) {
      
      qntPares++;
      somaPares += num;
    }
    
    mediaPares = somaPares / qntPares;
    if (qntPares==0) {
      mediaPares=0;
    }
    printf("(f) Média de números pares:\n");
    printf("%f\n", mediaPares);
    printf("----------\n");
    
    
    printf("PRÓXIMO\n");
    printf("----------\n");
    
  }
  
  return 0;
}