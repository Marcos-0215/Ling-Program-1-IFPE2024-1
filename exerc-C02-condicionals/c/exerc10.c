#include <stdio.h>

int main() {
  //C02 - 10

  float altura;
  char sexo;
  
  printf("Digite a sua altura(m): ");
  scanf("%f", &altura);
  
  printf("\nDigite o seu sexo (M/F): ");
  setbuf(stdin, NULL);
  scanf("%c", &sexo);
  
  if (sexo == 'M' || sexo == 'm') {
    printf("\nSeu peso ideal é: %.2fkg", (72.7 * altura) - 58);
  } else {
  if (sexo == 'F' || sexo == 'f') {
    printf("\nSeu peso ideal é: %.2fkg", (62.1 * altura) - 58);
    } else {
    printf("\n\nDigite um M ou F para o sexo (Masculino ou Feminino)");
    }
  };

return 0;
}