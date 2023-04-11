#include <stdio.h>
#include <stdlib.h>


struct list_node {
  char datum;
  struct list_node* next_p;
};

typedef struct list_node ListNode;
typedef ListNode* ListNodePtr; // alias for ListNode


void instructions(void);
void insert(ListNodePtr* sp, char val);
char delete(ListNodePtr* sp, char val);
int is_empty(ListNodePtr sp);
void print_list(ListNodePtr p);


int main() {
  ListNodePtr start_p = NULL;
  char item;

  instructions();
  printf("> ");
  unsigned int choice;
  scanf("%u", &choice);
  while (choice != 3) {
    switch (choice) {
      case 1:
        printf("Enter a character: > ");
        scanf("\n%c", &item);
        insert(&start_p, item);
        print_list(start_p);
        break;
      case 2:  // delete elem
        if (!is_empty(start_p)) {
          printf("Enter character to be deleted: > ");
          scanf("\n%c", &item);
          if (delete(&start_p, item)) {
            printf("%c deleted\n", item);
            print_list(start_p);
          } else {
            printf("%c not found\n\n", item);
          }
        } else {
          puts("List is empty\n");
        }
        break;
      default:
        puts("Invalid choice\n");
        instructions();
        break;
    }
    printf("> ");
    scanf("%u", &choice);
  }
  puts("Terminating normally");

  return 0;
}


void instructions() {
  puts(
    "Enter option:\n"
    "  1) insert item into list\n"
    "  2) delete item from list\n"
    "  3) exit\n");    
}


void insert(ListNodePtr* sp, char val) {
  ListNodePtr new_p = malloc(sizeof(ListNode));

  if (new_p != NULL) {
    new_p->datum = val;
    new_p->next_p = NULL;
    ListNodePtr prev_p = NULL;
    ListNodePtr curr_p = *sp;

    while (curr_p != NULL && val > curr_p->datum) {
      prev_p = curr_p;
      curr_p = curr_p->next_p;
    }
    if (prev_p == NULL) {
      new_p->next_p = *sp;
      *sp = new_p;
    } else {
      prev_p->next_p = new_p;
      new_p->next_p = curr_p;
    }
  } else {
    printf("%c not inserted. Insufficient memory\n", val);
  }
}


char delete(ListNodePtr* sp, char val) {
  if (val == (*sp)->datum) {
    ListNodePtr temp_p = *sp;
    *sp = (*sp)->next_p;
    free(temp_p);
    return val;
  } else {
    ListNodePtr prev_p = *sp;
    ListNodePtr curr_p = (*sp)->next_p;
    while (curr_p != NULL && curr_p->datum != val) {
      prev_p = curr_p;
      curr_p = curr_p->next_p;
    }
    if (curr_p != NULL) {
      ListNodePtr temp_p = curr_p;
      prev_p->next_p = curr_p->next_p;
      free(temp_p);
      return val;
    }
  }
  return '\0';
}


int is_empty(ListNodePtr sp) {
  return sp == NULL;
}


void print_list(ListNodePtr sp) {
  if (is_empty(sp)) {
    puts("List is empty\n");
  } else {
    while (sp != NULL) {
      printf("%c -> ", sp->datum);
      sp = sp->next_p;
    }
    puts("NULL\n");
  }
}
