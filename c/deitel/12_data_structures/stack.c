#include <stdio.h>
#include <stdlib.h>


struct stack_node {
  int datum;
  struct stack_node* next_p;
};


typedef struct stack_node StackNode;
typedef StackNode* StackNodePtr;


void prompt();
void print_stack(StackNodePtr sp);
void push(StackNodePtr* top_p, int datum);
int pop(StackNodePtr* top_p);
int is_empty(StackNodePtr top_p);


int main() {
  StackNodePtr stack_p = NULL;
  int val;
  unsigned int choice;

  prompt();
  printf("> ");
  scanf("%u", &choice);
  while (choice != 3) {
    switch (choice) {
      case 1: // push
        printf("Enter an integer: > ");
        scanf("%d", &val);
        push(&stack_p, val);
        print_stack(stack_p);
        break;
      case 2: // pop
        if (!is_empty(stack_p)) {
          printf("Popped: %d\n", pop(&stack_p));
        }
        print_stack(stack_p);
        break;
      default:
        puts("Invalid choice\n");
        prompt();
        break;
    }
    printf("> ");
    scanf("%u", &choice);
  }
  puts("Terminating normally");
  return 0;
}


void prompt() {
  puts(
    "Enter option:\n"
    "  1) push\n"
    "  2) pop\n"
    "  3) end\n");    
}


void print_stack(StackNodePtr sp) {
  if (sp == NULL) {
    puts("Stack is empty.\n");
  } else {
    puts("Stack is:");
    while (sp != NULL ) {
      printf("%d -> ", sp->datum);
      sp = sp->next_p;
    }
    puts("NULL\n");
  }
}


void push(StackNodePtr* top_p, int datum) {
  StackNodePtr new_p = malloc(sizeof(StackNode));

  if (new_p != NULL) {
    new_p->datum = datum;
    new_p->next_p = *top_p;
    *top_p = new_p;
  } else {
    printf("%d not pushed; no memory\n", datum);
  }
}


int pop(StackNodePtr* top_p) {
  StackNodePtr temp_p = *top_p;
  int val = (*top_p)->datum;
  *top_p = (*top_p)->next_p;
  free(temp_p);
  return val;
}


int is_empty(StackNodePtr top_p) {
  return top_p == NULL;
}
