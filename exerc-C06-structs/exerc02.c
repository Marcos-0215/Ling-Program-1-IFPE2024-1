// EXERCICIOS LINGUAGEM PROGRAMACAO 1 2024.1
// C06 -> Structs
// Problem -> 02
// Finished by ?? Apr 2024

#include <stdio.h>
#include <string.h>

struct Pessoa {
  char nome[20];
  int idade;
  char endereco[50];
};

int main()
{
  printf("C06-02\n\n");
  
  struct Pessoa pessoa1;
  
  printf("Digite o nome: ");
  fgets(pessoa1.nome, 20, stdin);
  pessoa1.nome[strlen(pessoa1.nome)-1] = '\0';
  
  printf("Digite a idade: ");
  scanf("%d", &pessoa1.idade);
  setbuf(stdin, NULL);
  
  printf("Digite o endereço: ");
  fgets(pessoa1.endereco, 50, stdin);
  pessoa1.endereco[strlen(pessoa1.endereco)-1] = '\0';
  
  
  printf("\nNome: %s\n", pessoa1.nome);
  printf("Idade: %d\n", pessoa1.idade);
  printf("Endereço: %s\n", pessoa1.endereco);
  
  return 0;
}