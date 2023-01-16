#include <ctype.h>
#include <stdio.h>
#include <stdlib.h>


typedef struct list {
  int data;
  struct list* next;
} list;


int is_empty(const list* lst) { return (lst == NULL); }


void print_list(list* lst, char* title) {
  printf("%s\n", title);
  while (lst != NULL) {
    printf("%d ", lst->data);
    lst = lst->next;
  }
  printf("\n");
}


int main() {
  list int_list;
  list* head = NULL;

  printf("sizeof(list): %lu\n", sizeof(list));
  head = malloc(sizeof(list));
  head->data = 5;
  head->next = NULL;
  print_list(head, "single-element list");
  return 0;
}
