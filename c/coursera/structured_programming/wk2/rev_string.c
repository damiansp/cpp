// use a stack to reverse a string
#include <ctype.h>
#include <stdio.h>

#define MAX_LEN 1000
#define EMPTY -1
#define FULL (MAX_LEN - 1)


typedef struct stack{
  char s[MAX_LEN];
  int top;
} stack;


void reset(stack *stk) { stk->top = EMPTY; }


void push(char c, stack *stk) {
  stk->top++;
  stk->s[stk->top] = c;
}


char pop(stack *stk) { return stk->s[stk->top--]; }


char top(const stack *stk) { return stk->s[stk->top]; }


int is_empty(const stack *stk) { return stk->top == EMPTY; }


int is_full(const stack *stk) { return stk->top == FULL; }


int main() {
  stack char_stack;
  char *s1 = "i am otto am i";
  char rev_str[30];
  int i = 0;

  reset(&char_stack);
  printf("Original: %s\n", s1);
  while(s1[i] != '\0') {
    push(s1[i++], &char_stack);
  }
  i = 0;
  while(!is_empty(&char_stack) && i < 20) {
    rev_str[i++] = pop(&char_stack);
  }
  printf("Reversed: %s\n", rev_str);
  return 0;
}
