// EXERCICIOS LINGUAGEM PROGRAMACAO 1 2024.1
// C06 -> Structs
// Problem -> 01
// Finished by ?? Apr 2024

// NEED OF REVISION. Done when I didn't fully understand structs yet

#include <stdio.h>

struct Horario {
  int hora;
  int min;
  int seg;
};

struct Data {
  int dia;
  int mes;
  int ano;
};

struct Compromisso {
  struct Data;
  struct Horario;
  char desc[50];
};

int main() {
    
  struct Horario horaAlmoco;
  
  horaAlmoco.hora = 12;
  horaAlmoco.min = 30;
  horaAlmoco.seg = 00;
  
  struct Data dataAlmoco;
  
  dataAlmoco.dia = 12;
  dataAlmoco.mes = 04;
  dataAlmoco.ano = 2024;
  

  
  printf("%d\n", horaAlmoco.hora);
  printf("%d\n", horaAlmoco.min);
  printf("%d\n", horaAlmoco.seg);
  
  printf("%d\n", dataAlmoco.dia);
  printf("%d\n", dataAlmoco.mes);
  printf("%d\n", dataAlmoco.ano);
  
  

  return 0;
}