// EXERCICIOS LINGUAGEM PROGRAMACAO 1 2024.1
// C05 - String
// Problem -> 06
// Finished by ?? ??? 2024


#include <stdio.h>

int main() {
  char name[50];
  char sex;
  int age;

  printf("Digite o nome: ");
  scanf("%s", name);
  printf("Digite o sexo (M ou F): ");
  getchar();
  scanf("%c", &sex);
  printf("Digite a idade: ");
  scanf("%d", &age);
  
  if ((sex == 'F' || sex == 'f') && age < 25) {
    printf("\n%s\n", name);
    printf("ACEITA\n");
  } else {
    printf("\nNÃO ACEITA\n");
  }

  return 0;
}