#include <stdio.h>
#include <stdlib.h>
#define SIZE 6 
typedef struct bst_node_t {
    int val;
    struct bst_node_t *left;
    struct bst_node_t *right;
} bst_node;

void bst_display(const bst_node *root) {
    if (!root) return;
    bst_display(root->left);
    printf("%d\n", root->val);
    bst_display(root->right);
}

void bst_insert(bst_node **root, int v) {
    if (!*root) {
        *root = malloc(sizeof(bst_node));
        (*root)->val = v;
        (*root)->left = (*root)->right = NULL;
        return;
    }
    if ((*root)->val > v)
        bst_insert(&((*root)->left), v);
    else
        bst_insert(&((*root)->right), v);
}


int is_same_level(bst_node *root, int node1, int node2){
    /* Your code here */
}

int countValues(bst_node *root){
    /* Your code here */
}
bst_node *halfSubtree(bst_node *root, int n){
    /* Your code here */
}

int main() {
    int i, node1, node2, ret;
    bst_node *root = NULL;
    
    int data[SIZE] = {7,3,9,2,8,5};
    for(i=0;i<SIZE;i++)
        bst_insert(&root, data[i]);

    printf("Count total values: %d\n", countValues(root));
    
    bst_node *subtree = NULL;
    if(subtree = halfSubtree(root, countValues(root))){
        printf("Half subtree exists at node %d.\n", subtree->val);
        printTree(subtree, 0);
    }
    else
        printf("Half subtree does not  exist.\n");
   
    printf("Enter two nodes to check level: ");
    scanf("%d %d", &node1, &node2);

    ret = is_same_level(root, node1, node2);
    if(ret == 1) printf("They are at the same level.\n");
    else if(ret == 0) printf("They are at the different level.\n");
    else printf("One of nodes does not exist. \n");
}
