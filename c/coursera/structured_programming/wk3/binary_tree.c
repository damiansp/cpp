#include <stdio.h>
#include <stdlib.h>


typedef char data;

struct node {
  data d;
  struct node* left;
  struct node* right;
};

typedef struct node Node;
typedef Node* BTree;


void in_order(BTree root) {
  if (root != NULL) {
    in_order(root->left);
    printf("%c ", root->d);
    in_order(root->right);
  }
}


BTree new_node() {
  return malloc(sizeof(Node));
}


BTree init_node(data d, BTree t1, BTree t2) {
  BTree t = new_node();
  t->d = d;
  t->left = t1;
  t->right = t2;
  return t;
}


BTree create_tree(data a[], int i, int size) {
  if (i >= size) {
    return NULL;
  }
  return init_node(
    a[i], create_tree(a, 2*i + 1, size), create_tree(a, 2*i + 2, size));
}


int main() {
  char d[] = {'a', 'b', 'c', 'd', 'e'};
  BTree t = create_tree(d, 0, 5);

  in_order(t);
  printf("\n");
}
