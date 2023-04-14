#include <stdio.h>
#include <stdlib.h>


struct queue_node {
  char datum;
  struct queue_node* next_p;
};

typedef struct queue_node QNode;
typedef QNode* QNodePtr;


void prompt(void);
void enq(QNodePtr* head_p, QNodePtr* tail_p, char val);
char deq(QNodePtr* head_p, QNodePtr* tail_p);
int is_empty(QNodePtr head_p);
void print_q(QNodePtr qp);


int main() {
  QNodePtr head_p = NULL;
  QNodePtr tail_p = NULL;
  char val;
  unsigned int choice;

  prompt();
  printf("> ");
  scanf("%u", &choice);
  while (choice != 3) {
    switch (choice) {
      case 1:
        printf("Enter character: > ");
        scanf("\n%c", &val);
        enq(&head_p, &tail_p, val);
        print_q(head_p);
        break;
      case 2:
        if (!is_empty(head_p)) {
          val = deq(&head_p, &tail_p);
          printf("%c dequeued\n", val);
        }
        print_q(head_p);
        break;
      default:
        puts("Invalid option.\n");
        prompt();
        break;
    }
    printf("> ");
    scanf("%u", &choice);
  }
  puts("Exiting.");
  return 0;
}


void prompt() {
  printf(
    "Enter option:\n"
    "  1) Add to queue\n"
    "  2) Get next item in queue\n"
    "  3) Exit\n");
}


void enq(QNodePtr* head_p, QNodePtr* tail_p, char val) {
  QNodePtr new_p = malloc(sizeof(QNode));

  if (new_p != NULL) {
    new_p->datum = val;
    new_p->next_p = NULL;
    if (is_empty(*head_p)) {
      *head_p = new_p;
    } else {
      (*tail_p)->next_p = new_p;
    }
    *tail_p = new_p;
  } else {
    printf("%c not queued. Insufficient memory.\n", val);
  }
}


char deq(QNodePtr* head_p, QNodePtr* tail_p) {
  char val = (*head_p)->datum;
  QNodePtr temp_p = *head_p;
  *head_p = (*head_p)->next_p;
  if (*head_p == NULL) {
    *tail_p = NULL;
  }
  free(temp_p);
  return val;
}


int is_empty(QNodePtr head_p) {
  return head_p == NULL;
}


void print_q(QNodePtr qp) {
  puts("Queue contains:");
  while (qp != NULL) {
    printf("%c -> ", qp->datum);
    qp = qp->next_p;
  }
  puts("NULL\n");
}
