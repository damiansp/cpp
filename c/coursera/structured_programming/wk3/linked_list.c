#include <ctype.h>
#include <stdio.h>
#include <stdlib.h>


typedef struct list{
  int datum;
  struct list* next;
} list;


int is_empty(const list* l) { return l == NULL; }


list* create_list(int d) {
  list* head = malloc(sizeof(list));
  head->datum = d;
  head->next = NULL;
  return head;
}


list* add_to_front(int d, list* h) {
  list* head = create_list(d);
  head->next = h;
  return head;
}


list* array_to_list(int d[], int size) {
  list* head = create_list(d[0]);

  for (int i = 1; i < size; i++) {
    head = add_to_front(d[i], head);
  }
  return head;
}


void print_list(list* h, char* title) {
  printf("%s\n", title);
  while (h != NULL) {
    printf("%d ", h->datum);
    h = h->next;
  }
}


int main() {
  list int_list;
  list* head = NULL;
  int data[6] = {2, 3, 5, 7, 8, 9};

  head = array_to_list(data, 6);
  print_list(head, "list of ints");
  printf("\n\n");
  return 0;
}
