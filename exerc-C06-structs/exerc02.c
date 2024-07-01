// EXERCICIOS LINGUAGEM PROGRAMACAO 1 2024.1
// C06 -> Structs
// Problem -> 02
// Finished by 30 Jun 2024

#include <stdio.h>
#include <string.h>

struct dados {
  char nome[51];
  int idade;
  char endereco[101];
};

int main() {
  
  struct dados cad001;
  
  printf("Digite nome, idade e endereço.\n");
  printf("Nome: ");
  fgets(cad001.nome, 50, stdin);
  cad001.nome[strlen(cad001.nome)-1] = '\0';
  
  printf("Idade: ");
  scanf("%d", &cad001.idade);
  
  printf("Endereço: ");
  getchar();
  fgets(cad001.endereco, 100, stdin);
  cad001.endereco[strlen(cad001.endereco)-1] = '\0';
  
  printf("-----------\n");
  
  printf("%s\n", cad001.nome);
  printf("%d\n", cad001.idade);
  printf("%s\n", cad001.endereco);
    
}