#include <ctype.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define MAXWORD 100



/* binary tree node */
struct tnode {
  char* word;
  int count;
  struct tnode* left;
  struct tnode* right;
};


struct tnode* addtree(struct tnode*, char*);
int getword(char*, int);
struct tnode* talloc(void);
void treeprint(struct tnode*);
char* strdup(char*);




int main() {
  struct tnode* root;
  char word[MAXWORD];

  root = NULL;
  while (getword(word, MAXWORD) != EOF) {
    if (isalpha(word[0])) { root = addtree(root, word); }
  }
  treeprint(root);
  return 0;
}


/* add a node with w at or below p */
struct tnode* addtree(struct tnode* p, char* w) {
  int cond;

  if (p == NULL) {  // new word
    p = talloc();
    p->word = strdup(w);
    p->count = 1;
    p->left = p->right = NULL;
  } else if ((cond = strcmp(w, p->word)) == 0) { p->count++; }  // repeat
  else if (cond < 0) { p->left = addtree(p->left, w); }
  else { p->right = addtree(p->right, w); }
  return p;
}


/* in-order print of tree p */
void treeprint(struct tnode* p) {
  if (p != NULL) {
    treeprint(p->left);
    printf("%4d %s\n", p->count, p->word);
    treeprint(p->right);
  }
}


/* make a tnode */
struct tnode* talloc(void) {
  return (struct tnode*) malloc(sizeof(struct tnode));
}


/* copy a string */
char* strdup(char* s) {
  char* p;

  p = (char*) malloc(strlen(s) + 1);  // + 1 for '\0'
  if (p != NULL) { strcp(p, s); }
  return p;
}
