#include <stdio.h>

int main()
{
  /* C02 - 08 
  Faça um programa que leia 2 notas de um aluno, verifique se as notas são válidas e exiba na tela a média destas notas. Uma nota válida deve ser, obrigatoriamente, um valor entre 0.0 e 10.0, onde caso a nota não possua um valor válido, este fato deve ser informado ao usuário e o programa termina.
  */

  float nota1;
  float nota2;

  printf("Digite a 1ª nota: ");
  scanf("%f", &nota1);

  if (nota1 < 0 || nota1 > 10.0) {
    printf("\nValor inválido. Começe novamente.");
    return 1;
  }

  printf("Digite a 2ª nota: ");
  scanf("%f", &nota2);

  if (nota2 < 0 || nota2 > 10.0) {
    printf("\nValor inválido. Começe novamente.");
    return 1;
  }

  printf("\nMédia: %.2f", (nota1+nota2)/2);

  return 0;
}