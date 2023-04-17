#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define N_VALS 10
#define MAX_VAL 50


struct tree_node {
  struct tree_node* left_p;
  struct tree_node* right_p;
  int datum;
};

typedef struct tree_node TreeNode;
typedef TreeNode* TreeNodePtr;


void insert(TreeNodePtr* tree_p, int val);
void in_order(TreeNodePtr tree_p);
void pre_order(TreeNodePtr tree_p);
void post_order(TreeNodePtr tree_p);


int main() {
  TreeNodePtr root_p = NULL;

  srand(time(NULL));
  puts("Values to insert:");
  for (unsigned int i = 1; i <= N_VALS; ++i) {
    int val = rand() % MAX_VAL;
    printf("%3d", val);
    insert(&root_p, val);
  }
  puts("\n\nPre order:");
  pre_order(root_p);
  puts("\n\nIn order:");
  in_order(root_p);
  puts("\n\nPost order:");
  post_order(root_p);
  printf("\n");
  return 0;
}


void insert(TreeNodePtr* tree_p, int val) {
  if (*tree_p == NULL) {
    *tree_p = malloc(sizeof(TreeNode));
    if (*tree_p != NULL) {
      (*tree_p)->datum = val;
      (*tree_p)->left_p = NULL;
      (*tree_p)->right_p = NULL;
    } else {
      printf("%d not inserted. Insufficient memory.\n", val);
    }
  } else {
    if (val < (*tree_p)->datum) {
      insert(&((*tree_p)->left_p), val);
    } else if (val > (*tree_p)->datum) {
      insert(&((*tree_p)->right_p), val);
    } else {
      printf(" duplicate");
    }
  }
}


void in_order(TreeNodePtr tree_p) {
  if (tree_p != NULL) {
    in_order(tree_p->left_p);
    printf("%3d", tree_p->datum);
    in_order(tree_p->right_p);
  }
}


void pre_order(TreeNodePtr tree_p) {
  if (tree_p != NULL) {
    printf("%3d", tree_p->datum);
    pre_order(tree_p->left_p);
    pre_order(tree_p->right_p);
  }
}


void post_order(TreeNodePtr tree_p) {
  if (tree_p != NULL) {
    post_order(tree_p->left_p);
    post_order(tree_p->right_p);
    printf("%3d", tree_p->datum);
  }
}
