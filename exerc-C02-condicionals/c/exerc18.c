#include <stdio.h>

int main () 
{
  printf("C02-18 CALCULADORA BÁSICA");

  char oper;
  float num1, num2;

  printf("\n\nDigite um operador matemático (+ - * /): ");
  scanf("%c", &oper);

  if (oper != '+'&& oper != '-'&& oper != '*'&& oper != '/') {
    printf("Digite um operador válido.");
    return 1;
  }

  printf("Digite o primeiro número: ");
  scanf("%f", &num1);
  printf("Digite o segundo número: ");
  scanf("%f", &num2);

  switch (oper) {
    case '+':
      printf("\nResultado (soma): %.2f", num1+num2);
      break;
    case '-':
      printf("\nResultado (subtração): %.2f", num1-num2);
      break;
    case '*':
      printf("\nResultado (multiplicação): %.2f", num1*num2);
      break;
    case '/':
      printf("\nResultado (divisão): %.2f", num1/num2);
      break;
  }
  return 0;
}