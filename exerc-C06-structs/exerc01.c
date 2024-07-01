// EXERCICIOS LINGUAGEM PROGRAMACAO 1 2024.1
// C06 -> Structs
// Problem -> 01
// Finished by 30 Jun 2024

#include <stdio.h>

struct horario {
  int hora;
  int minutos;
  int segundos;
};

struct data {
  int dia;
  int mes;
  int ano;
};

struct compromisso {
  struct data data;
  struct horario horario;
  char *descricao;
};


int main() {
  
  struct horario horarioAlmoco;
  
  horarioAlmoco.hora = 12;
  horarioAlmoco.minutos = 30;
  horarioAlmoco.segundos = 00;
  
  printf("Horario Almoco: %.2d:%.2d:%.2d\n", horarioAlmoco.hora, horarioAlmoco.minutos, horarioAlmoco.segundos);
  
  struct data dataAlmoco;
  
  dataAlmoco.dia = 01;
  dataAlmoco.mes = 07;
  dataAlmoco.ano = 2024;
  
  printf("Horario Almoco: %.2d/%.2d/%d\n", dataAlmoco.dia, dataAlmoco.mes, dataAlmoco.ano);
  
  printf("-----------\n");
  
  struct compromisso almoco;
  
  almoco.horario.hora = 12;
  almoco.horario.minutos = 30;
  almoco.horario.segundos = 00;
  
  printf("Horario Compromisso: %.2d:%.2d:%.2d\n", almoco.horario.hora, almoco.horario.minutos, almoco.horario.segundos);
  
  almoco.data.dia = 04;
  almoco.data.mes = 8;
  almoco.data.ano = 2024;
  
  
  printf("Horario Compromisso: %.2d/%.2d/%d\n",  almoco.data.dia,  almoco.data.mes,  almoco.data.ano);
  
  almoco.descricao = "Almoco marcado com Arthur Morgan, para combinar proximas tarefas";
  
  
  printf("Descricao Compromisso: %s\n", almoco.descricao);
  
  
}