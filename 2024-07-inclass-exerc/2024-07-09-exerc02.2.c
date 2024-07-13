// EXERCICIOS EM AULA LINGUAGEM PROGRAMACAO 1 2024.1
// Class 09 Jul 2024
// Problem -> 02 (Program that receives decimal number and prints it in binary)

// Finished by 11 Jul 2024

// This is my 2nd solution. The first one was done using arrays. Then I decided to code this solution again using LINKED LISTS instead of arrays, to practice my recently acquired linked lists skills and others (functions, recursion, pointers, memory allocation). It was a fun challenge. It took me around 50min to finish (since I'm still learning the ropes of linked lists).


#include <stdio.h>
#include <stdlib.h>

struct node {
  int data;
  struct node* link;
};

void printLinkedList(struct node* head) {  
  struct node* ptr = head;  
  while(ptr!=NULL) {
    printf("%d", ptr->data);
    ptr = ptr->link;
  }  
}

void converterNaLinkedList(int n, struct node** pHead) {
  
  if (n==0) {
    return;
  } else {
    
    struct node *ptr = (struct node*) malloc(sizeof(struct node));
    ptr->link = *pHead;
    ptr->data = n%2;
    
    *pHead = ptr;
    
    converterNaLinkedList(n/2, pHead);
  }  
}

void printBinario(int n) {
  
  struct node* head = NULL;
  struct node** pHead = &head;
  
  converterNaLinkedList(n, pHead);
  
  printLinkedList(head);
  
  return;
}

int main() {
  
  int n;
  
  printf("Digite um número decimal:\n");
  scanf("%d", &n);
  
  printf("----------\nEm binario:\n");
  
  if (n==0) {
    printf("0");
    return 0;
  }
  
  printBinario(n);
  
  return 0;
}